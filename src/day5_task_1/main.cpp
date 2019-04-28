#include<iostream>
#include "Vec2.hpp"

bool isCross(Vec2 a1, Vec2 a2, Vec2 b1, Vec2 b2)
{
    Vec2 a2_a1(a1-a2), b1_a1(b1-a1), b2_a1(b2-a1);
    return cross(b1_a1,a2_a1)*cross(b2_a1,a2_a1);
}

void printInteresct(Vec2 a1, Vec2 a2, Vec2 b1, Vec2 b2, Vec2 b3)
{
    if(isCross(a1,a2,b1,b2)||isCross(a1,a2,b2,b3)||isCross(a1,a2,b3,b1))
    {
        std::cout << "交差してます\n";
    }
    else
    {
        std::cout << "交差してないです\n";
    }
}

int main()
{
    Vec2 a1, a2, b1, b2, b3;
    std::cout << "直線の2点を入力してください\n";
    std::cin >> a1 >> a2;
    std::cout << "三角形の1点目を入力してください\n";
    std::cin >> b1;
    std::cout << "三角形の2点目を入力してください\n";
    std::cin >> b2;
    std::cout << "三角形の3点目を入力してください\n";
    std::cin >> b3;
    
    printInteresct(a1,a2,b1,b2,b3);

    return 0;
}