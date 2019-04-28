#include <iostream>
#include <string>
#include<array>
#include<vector>

const int size = 5;

int main()
{
    
    double b = 2.4;

    std:: cout << static_cast<int>(b) << "\n";

    std:: array<int, size> results;
    std:: array<int, size> result{{1, 2, 3, 4, 5}};

    std:: vector<int> result_vec;

    for (int i = 0; i < size; ++i)
    {
        // result_vec.push_back(i*i);
        result_vec.insert(result_vec.begin(),i);
        /*
        for(int j = 0; j < result_vec.size(); ++j)
        {
            std:: cout << result_vec[j] << "\n";
        }
        */
    }

    for(int i = 0; i < size; ++i)
    {
        results[i] = i*i;
        result[i] = i+i;
        //std::cout << results[i] << ", ";
        std::cout << result_vec[i] <<"\n";
    }
    return 0;
}