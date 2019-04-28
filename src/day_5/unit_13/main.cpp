#include<iostream>
#include"Person.hpp"
#include<array>

constexpr int size = 3;

void printAverageAge(std::array<Person,size> &customers)
{
    int ave = 0;
    for(int i=0; i<size; ++i)
    {
        ave += (customers[i].getAge())/size;
    }
    std::cout << ave << "\n";
}


int main()
{

    std::array<Person, size> customers;
    printAverageAge(customers);
}