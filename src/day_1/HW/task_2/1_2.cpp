#include <iostream>
#include <string>

int main()
{
    double rate;
    int year=1;
    double money;

    std::cout << "年利を入力してください\n";
    std::cin >> rate;
    money = (1+rate/100);
    while (money < 2) {
        money *= (1+rate/100);
        ++year;
    }
    std::cout << "2倍以上になるのは" << year << "年後です\n";
    return 0;
}