#include <iostream>
#include <array>

int const SIZE = 5;

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

void bubbleSort(int array[], int *step)
{
    for(int i = 0; i < SIZE-1 ; ++i)
    {
        for(int j = 1; j < SIZE - i ; ++j)
        {
            if(array[j] < array[j-1])
            {
                swap(&array[j], &array[j-1]);
            }
            *step += 1;
        }
   }
}

void insertSort(int array[], int *step)
{
    int tmp;
    for(int i = 1; i < SIZE ; ++i)
    {
        tmp = array[i];
        if(array[i-1] > tmp)
        {
            int j = i;
            while(j > 0 && array[j-1] > tmp)
            {
                array[j] = array[j-1];
                --j;
            }
            array[j] = tmp;
        }
        *step += 1;
    }
}

void quickSort(int array[], int begin, int end, int *step)
{
    if(begin < end){
        int basis_point = (begin+end)/2-1;
        int basis = array[basis_point];
        array[basis_point] = array[begin];
        int p = begin;
        for(int i=begin+1; i<=end-begin; i++)
        {
            if(array[i] < basis)
            {
                p = p+1;
                swap(&array[p], &array[i]);
                std::cout << p << "  \n";
            }   
        }
        array[begin] = array[p];
        array[p] = basis;
        if(begin < p)
        {
            quickSort(array, begin, p-1, step);
        }
        if(end > p)
        {
            quickSort(array, p+1, end, step);
        }
    }
}

int main()
{
    int *array = new int[SIZE];
    int step = 0;

    for(int i = 0; i < SIZE; ++i)
    {
        std::cin >> array[i];
    }
    
    // bubbleSort(array,&step);
    // insertSort(array,&step);
    quickSort(array, 0, SIZE-1, &step);

    for(int i = 0; i < SIZE; ++i)
    {
        std::cout << array[i] << "  ";
    }

    std::cout << "\n";
    std::cout << step << "\n";
    delete[] array;
}