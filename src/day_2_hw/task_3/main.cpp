#include <stdio.h>
#include <string>
#include <array>

const int size = 5;

int count_eat_bite(int num_1[],int num_2[])
{
    int ans_eat = 0;
    int ans_bite = 0;
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            if(num_1[i] == num_2[j])
            {
                if(i == j){
                    ans_eat += 1;
                }
                else
                {
                    ans_bite += 1;
                }
            }
        }
    }
    return ans_eat, ans_bite;
}

int main()
{
    int num_1[size]={1, 2, 3, 4, 5};
    int num_2[size]={1, 2, 3, 4, 5};

    int eat=0, bite=0;

    eat, bite = count_eat_bite(num_1, num_2);
    printf("%d, %d \n",eat, bite);
    return 0;
}