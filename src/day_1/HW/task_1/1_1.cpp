#include <iostream>
#include <string>

int main()
{
    int x;
    int y;
    int ex_y = 101;

    for(x=1; x <= 100; x++){
        for(y=ex_y; y > 0; y--){
            if (10*(x+6)-(7-8*y)==699) {
                std::cout << "( " << x << "," << y << ")\n";
                ex_y = y;
                break;
            }
        std::cout << y << "\n";
        }
    }

    return 0;
}