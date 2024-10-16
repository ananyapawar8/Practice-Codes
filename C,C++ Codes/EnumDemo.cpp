#include <iostream>

int main()
{
    enum days{Sunday,Monday,Tuesday, Wednesday};

    std::cout<<Sunday<<"\n";
    std::cout<<Monday<<"\n";
    
    enum Months{January=10, February=20, March};

    std::cout<<January<<"\n";
    std::cout<<February<<"\n";
    std::cout<<March<<"\n";
    
    return 0;
}