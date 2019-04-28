#pragma once 
#include <string>

class Person
{

public:
    Person();

    void printName();
    void printAge();
    void increaseAge();
    int getAge();

private:
    std::string m_name;
    int m_age;
};