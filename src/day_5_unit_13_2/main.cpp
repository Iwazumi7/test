#include<iostream>
#include<vector>
#include<array>
#include<memory>
#include"Dragon.hpp"
#include"HighDragon.hpp"

constexpr int size = 3;

int main()
{
    std::array <double, size> pos_x_arr = {{2,4,6}};
    std::array <double, size> pos_y_arr = {{3,1,4}};

    // std::vector<Dragon> dragons;
    std::vector<std::unique_ptr<Dragon>> dragons;
    for(int i=0; i < size; ++i)
    {
        // dragons.emplace_back(pos_x_arr[i], pos_y_arr[i]);
        dragons.emplace_back(new Dragon(pos_x_arr[i], pos_y_arr[i]));
    }

    dragons.emplace_back(new HighDragon(0,0));
    for(int i=0; i < dragons.size(); ++i)
    {
        dragons[i] -> printHP();
        dragons[i] -> printPos();
        // dragons[i].printHP();
        // dragons[i].printPos();
    }


}