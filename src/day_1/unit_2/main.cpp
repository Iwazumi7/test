#include <iostream>
#include <string>

int main()
{
    int i = 0;
    for(;i <= 10; ++i)
    {
        std::cout << i<< "回目\n";
    }

    i = 0;
    while(i < 10){
        std::cout << i << "回目\n";
        ++i;
    }

    return 0;
}