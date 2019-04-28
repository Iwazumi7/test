#include<iostream>
#include"Person.hpp"
#include<array>

constexpr int size = 5;

void printAverageAge(std::array<Person,size> &customers)
{
    int sum = 0;
    for(int i=0; i<size; ++i)
    {
        sum += (customers[i].getAge());
    }
    std::cout << sum/size << "\n";
}


int main()
{

    std::array<Person, size> customers;
    printAverageAge(customers);
}