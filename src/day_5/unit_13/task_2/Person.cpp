#include<iostream>
#include "Person.hpp"

Person::Person()
{
    std::cout << "input last name: ";
    std::cin >> m_name;
    std::cout << "input age: ";
    std::cin >> m_age;
}

void Person::printName()
{
    std::cout << m_name << "\n";
}

void Person::printAge()
{
    std::cout << m_age << "\n";
}

void Person::increaseAge()
{
    ++m_age;
}
