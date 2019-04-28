#include<iostream>
#include"Person.hpp"
#include<array>
#include<vector>

constexpr int size = 3;
int main()
{
    Person daichi;
    daichi.printAge();

    Person *kuge = new Person();
    kuge -> printAge();

    delete kuge;

    // std::array <Person, size> customers;
    // std::vector<Person> customers;
    std::vector<std::unique_ptr<Person>> customers;

    for(int i=0; i<size; ++i)
    {
        // customers.push_back(Person());
        // customers.emplace_back();
        customers.emplace_back(new Person());
    }



    for(int i=0; i<customers.size(); ++i)
    {
        customers[i] -> printAge();
        // customers[i].printAge();
    }

    for(auto &person : customers)
    {
        person -> printName();
    }

}