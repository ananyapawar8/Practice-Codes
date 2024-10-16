#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXINODE 50
#define READ 1
#define WRITE 2
#define MAXFILESIZE 2048
#define REGULAR 1
#define SPECIAL 2

typedef struct superblock
{
    int TotalInodes;
    int FreeInode;
} SUPERBLOCK, *PSUPERBLOCK;

typedef struct inode
{
    char FileName[50];
    int InodeNumber;
    int FileSize;
    int FileActualSize;
    int FileType;
    char *Buffer;
    int LinkCount;
    int ReferenceCount;
    int permission;
    struct inode *next;
} INODE, *PINODE;

typedef struct filetable
{
    int readoffset;
    int writeoffset;
    int count;
    int mode;
    PINODE ptrinode;
} FILETABLE, *PFILETABLE;

typedef struct ufdt
{
    PFILETABLE ptrfiletable;
} UFDT;

UFDT UFDTArr[MAXINODE];
SUPERBLOCK SUPERBLOCKobj;
PINODE head = NULL;

void InitialiseSuperBlock()
{
    for (int i = 0; i < MAXINODE; i++)
        UFDTArr[i].ptrfiletable = NULL;

    SUPERBLOCKobj.TotalInodes = MAXINODE;
    SUPERBLOCKobj.FreeInode = MAXINODE;

    printf("Superblock initialized successfully.\n");
}

void CreateDILB()
{
    PINODE newn = NULL;
    PINODE temp = head;

    for (int i = 1; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));
        newn->LinkCount = 0;
        newn->ReferenceCount = 0;
        newn->FileType = 0;
        newn->FileSize = 0;
        newn->Buffer = NULL;
        newn->next = NULL;
        newn->InodeNumber = i;

        if (temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }
    }
    printf("DILB created successfully.\n");
}

int CreateFile(char *name, int permission)
{
    if (name == NULL || permission == 0 || permission > 3)
        return -1;

    if (SUPERBLOCKobj.FreeInode == 0)
        return -2;

    SUPERBLOCKobj.FreeInode--;

    PINODE temp = head;
    while (temp != NULL)
    {
        if (strcmp(name, temp->FileName) == 0)
            return -3;
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        if (temp->FileType == 0)
            break;
        temp = temp->next;
    }

    if (temp == NULL)
        return -4;

    for (int i = 0; i < MAXINODE; i++)
    {
        if (UFDTArr[i].ptrfiletable == NULL)
        {
            UFDTArr[i].ptrfiletable = (PFILETABLE)malloc(sizeof(FILETABLE));
            UFDTArr[i].ptrfiletable->count = 1;
            UFDTArr[i].ptrfiletable->mode = permission;
            UFDTArr[i].ptrfiletable->readoffset = 0;
            UFDTArr[i].ptrfiletable->writeoffset = 0;
            UFDTArr[i].ptrfiletable->ptrinode = temp;

            strcpy(temp->FileName, name);
            temp->FileType = REGULAR;
            temp->LinkCount = 1;
            temp->ReferenceCount = 1;
            temp->permission = permission;
            temp->FileActualSize = 0;
            temp->Buffer = (char *)malloc(MAXFILESIZE);

            printf("File '%s' created successfully with file descriptor: %d\n", name, i);
            return i;
        }
    }

    return -1;
}

int rm(char *name)
{
    PINODE temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->FileName, name) == 0)
        {
            temp->LinkCount--;
            if (temp->LinkCount == 0)
            {
                temp->FileType = 0;
                free(temp->Buffer);
                printf("File '%s' deleted successfully.\n", name);
                return 0;
            }
        }
        temp = temp->next;
    }
    return -1;
}

void ls()
{
    PINODE temp = head;
    int found = 0;
    printf("File Name\tInode Number\tFile Size\tLink Count\n");
    while (temp != NULL)
    {
        if (temp->FileType != 0)
        {
            found = 1;
            printf("%s\t\t%d\t\t%d\t\t%d\n", temp->FileName, temp->InodeNumber, temp->FileActualSize, temp->LinkCount);
        }
        temp = temp->next;
    }
    if (!found)
        printf("No files found.\n");
}

int WriteFile(int fd, char *data, int size)
{
    if (UFDTArr[fd].ptrfiletable == NULL)
        return -1;

    if (UFDTArr[fd].ptrfiletable->mode != WRITE)
        return -2;

    if (size > MAXFILESIZE - UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize)
        return -3;

    strncat(UFDTArr[fd].ptrfiletable->ptrinode->Buffer, data, size);
    UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize += size;
    UFDTArr[fd].ptrfiletable->writeoffset += size;

    printf("Data written successfully.\n");
    return size;
}

int ReadFile(int fd, char *buffer, int size)
{
    if (UFDTArr[fd].ptrfiletable == NULL)
        return -1;

    if (UFDTArr[fd].ptrfiletable->mode != READ)
        return -2;

    if (UFDTArr[fd].ptrfiletable->ptrinode->FileActualSize == 0)
        return -3;

    strncpy(buffer, UFDTArr[fd].ptrfiletable->ptrinode->Buffer + UFDTArr[fd].ptrfiletable->readoffset, size);
    buffer[size] = '\0';
    UFDTArr[fd].ptrfiletable->readoffset += size;

    return size;
}

int main()
{
    char command[50], filename[50], buffer[1024];
    int fd, permission, size;

    InitialiseSuperBlock();
    CreateDILB();

    while (1)
    {
        printf("Mention below to 'create', 'write', 'list', 'delete' or 'exit' [a system] commands.");
        printf("\nVFS :> ");
        scanf("%s", command);

        if (strcmp(command, "create") == 0)
        {
            printf("Enter file name: ");
            scanf("%s", filename);
            printf("Enter permission (1 for read, 2 for write, 3 for both): ");
            scanf("%d", &permission);
            CreateFile(filename, permission);
        }
        else if (strcmp(command, "ls") == 0)
        {
            ls();
        }
        else if (strcmp(command, "rm") == 0)
        {
            printf("Enter file name to delete: ");
            scanf("%s", filename);
            rm(filename);
        }
        else if (strcmp(command, "write") == 0)
        {
            printf("Enter file descriptor: ");
            scanf("%d", &fd);
            printf("Enter data to write: ");
            scanf(" %[^\n]s", buffer);
            size = strlen(buffer);
            WriteFile(fd, buffer, size);
        }
        else if (strcmp(command, "read") == 0)
        {
            printf("Enter file descriptor: ");
            scanf("%d", &fd);
            printf("Enter number of bytes to read: ");
            scanf("%d", &size);
            ReadFile(fd, buffer, size);
            printf("Data read: %s\n", buffer);
        }
        else if (strcmp(command, "exit") == 0)
        {
            printf("Terminating the file system...\n");
            break;
        }
        else
        {
            printf("Invalid command!\n");
        }
    }

    return 0;
}
