#include <iostream>
#include <stdio.h>
#include <string>
#include <array>

#include "util.h"
#include "constants.h"

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
    ans = isCross(r_1,num_1,r_2,num_2);
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