#define USE_MATH_DEFINES
#include <iostream>
#include <cstdio>
#include <string>
#include <array>
#include <cmath>

double max(double num_1, double num_2)
{
    if(num_1> num_2)
    {
        return num_1;
    }
    else
    {
        return num_2;   
    }
}
void prints(std::string sentence)
{
    std::cout << sentence << "\n";
}

int max(int num_1, int num_2)
{
    if(num_1> num_2)
    {
        return num_1;
    }
    else
    {
        return num_2;   
    }
}

int main()
{
    //int num = 5;
    //double num_d = 4.3;
    char size;
    //double num_1, num_2, num_3;
    //std:: cin >> num_1 >> num_2 >> num_3;
    //std:: cout << max(max(num_1, num_2),num_3) << "\n";
    //std::string words = "function";

    std::cout << std::cos(M_PI/3)<< "\n";

    
    //printf("%s %d %lf \n", words.c_str(), num, num_d);
    std::cin >> size;

    switch (size)
    {
        case 's': case 'S':
            prints("size: S");
            break;
        case 'm': case 'M':
            prints("size: M");
            break;
        default:
            break;
    }
    return 0;
}