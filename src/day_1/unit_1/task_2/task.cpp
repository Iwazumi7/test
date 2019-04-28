#include <iostream>
#include <string>

int main()
{
    //int は整数、double は少数 float=0.4f f必要 
    int num;
    std::cout << "数字を入力してね\n";
    std::cin >> num;
    if (num%2==0) {
        std::cout <<"これは偶数です\n";
    }
    else
    {
        std::cout << "これは奇数です\n";
    }
    
    return 0;
}