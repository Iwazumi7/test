#include <iostream>
#include <stdio.h>
#include <string>
#include <array>

const int size = 2;

bool cross(int r_1, int xy_1[], int r_2, int xy_2[])
{
    double diffe = 0;
    diffe = (xy_1[0]-xy_2[0])*(xy_1[0]-xy_2[0])+(xy_1[1]-xy_2[1])*(xy_1[1]-xy_2[1]);
    if((r_1+r_2)*(r_1+r_2) < diffe)
    {
        return false;
    }
    return true;
}

int main()
{
    int num_1[size]={}, num_2[size]={};
    int r_1, r_2;
    int ans;

    std::cout << "円1の中心代入してね\n";
    std::cin >> num_1[0] >> num_1[1];
    std::cout << "円1の半径代入してね\n";
    std::cin >> r_1;
    std::cout << "円2の中心代入してね\n";
    std::cin >> num_2[0] >> num_2[1];
    std::cout << "円2の半径代入してね\n";
    std::cin >> r_2;
    ans = cross(r_1,num_1,r_2,num_2);
    if(ans==1)
    {
        printf("%s \n","円１と円２は被っているよ");
    }
    else
    {
        printf("%s \n","円１と円２は被っていないよ");
    }
    return 0;
}