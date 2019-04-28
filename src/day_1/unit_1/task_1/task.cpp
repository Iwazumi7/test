#include <iostream>
#include <string>

int main()
{
    //int は整数、double は少数 float=0.4f f必要 
    double height;
    int weight;
    std::cout << "身長と体重を入力してね\n";
    std::cin >> height;
    std::cin >> weight;
    double bmi = weight/height/height;

    std::cout << "君の身長は" << height<<"です\n" ;
    std::cout << "君の体重は" << weight<<"です\n" ;
    std::cout << "君のBMIは" << weight/height/height << "です\n";

    bool isInput = true;

    if (isInput) {
        std::cout << "isInput=True\n";
    }
    else
    {
        std::cout << "isInput=False\n";
    }
    
    

    if (bmi < 18.5) {
        std::cout << "痩せすぎです\n";
    }
    else if (bmi < 25) {
        if (bmi == 22) {
            std::cout << "The 標準体型\n";
        }
        else
        {
            std::cout << "普通体型です\n";
        }
    }
    else
    {
        std::cout << "肥満です\n";
    }
    

    return 0;
}