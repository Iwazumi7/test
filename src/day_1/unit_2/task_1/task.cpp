#include <iostream>
#include <string>

int sort(int i, int num){
    while(i<(num/4))
    {
        if (num % (2*i+1) == 0 & (2*i+1) != num) 
        {
            return 0;
        }
        ++i;
    }
    return 1;
}

int main(){
    int num;
    int i=1;
    int ans;

    std::cout << "数字を入力してね\n";
    std::cin >> num;

    if (num%2==0) {
        std::cout << "素数ではない\n";
        return 0;
    }
    else
    {
        ans = sort(i,num);
    }
    std::cout << "素数だよ\n";
    

    return 0;
}