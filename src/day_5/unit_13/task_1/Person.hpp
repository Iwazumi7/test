#pragma once 
#include <string>

class Person
{

public:
    Person();

    void printName();
    void printAge();
    void increaseAge();

private:
    std::string m_name;
    int m_age;
};