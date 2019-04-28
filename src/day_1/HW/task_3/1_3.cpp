#include <iostream>
#include <string>

int main()
{
    double m;
    int F;
    int t;

    std::cout << "質量・推進力・時刻を入力してください\n";
    std::cin >> m;
    std::cin >> F;
    std::cin >> t;
    
    std::cout << t << "秒後の速度は" << F/m*t << "です\n";
    return 0;
}