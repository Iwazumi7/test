#include<iostream>
#include "Dragon.hpp"

// int Dragon::s_count = 0;

Dragon::Dragon(double x, double y) :
  m_hp(10), m_x(x), m_y(y)
{
    // ++s_count;
    // m_hp = 10;
    // m_x = x;
    // m_y = y;
}
void Dragon::printHP()
{
    std::cout << m_hp  << "\n";
}
void Dragon::printPos()
{
    std::cout << m_x << " ," << m_y << "\n";
}