#include <iostream>
#include <string>
#include<array>
#include<vector>

const int size = 9;

int main()
{
    std::array<std::array<int, size>,size> results;
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            results[i][j] = (i+1)*(j+1);
        }
    }
    /*
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            std::cout.width(4);
            std::cout.fill(' ');
            std::cout <<  i+1 << " x " << j+1 << " = " << results[i][j] <<"\n";
        }
    }
    */
    
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            std::cout.width(4);
            std::cout.fill(' ');
            std::cout << results[i][j] ;
        }
        std::cout << "\n";
    }


    return 0;
}
