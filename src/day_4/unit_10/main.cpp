#include <iostream>
#include <array>

void swap(int &i, int &j)
{
    int tmp = i;
    i = j;
    j = tmp;

    std::cout <<"&i : " << &i << "  &j : " << &j << "\n";
}

void swap(int *i_ptr, int *j_ptr)
{
    if(!i_ptr || !j_ptr)
    {
        return;
    }
    int tmp = *i_ptr;
    *i_ptr = *j_ptr;
    *j_ptr = tmp;
}

int main()
{
    int x = 5;
    int y = 3;

    int *ptr = new int;
    *ptr = 5;
    std::cout << "  *ptr : " << *ptr << "\n";
    delete ptr;


    std::array <int, 3> arr = {2,7,0};

    // int *ptr = &x;



    // std::cout <<"&arr : " << &arr << "  &arr_0 : " << &arr[0] << "\n";
    
    std::cout <<"&x : " << &x << "  ptr : " << ptr << "\n";
    std::cout <<"x : " << x << "  *ptr : " << *ptr << "\n";

    *ptr = 8;
    std::cout <<"x : " << x << "  *ptr : " << *ptr << "\n";

    ptr = &y;
    // swap(x,y);
    // std::cout << "y = "<< y << "  *ptr : " << *ptr << "\n";
    x = 3;
    y = 5;

    swap(&x, &y);

    int *x_ptr = nullptr;
    int *y_ptr = nullptr;

    swap(x_ptr,y_ptr);
    std::cout << "x : " << x << ", y = "<< y  << "\n";
}

