#include <iostream>
#include <string>

int main()
{
    //int は整数、double は少数 float=0.4f f必要 
    int num;

    std::cout << "数字を入力してね\n";
    std::cin >> num;
    std::string number;
    number = "2019";
    // コメントアウト
    // std::cout << 256*256*256*256 << "\n";
    std::cout << sizeof(number) << "\n";
    std::cout << num << "\n";
    return 0;
}