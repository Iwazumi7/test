// #include <iostream>
// #include <random>
// #include <memory>

// std::random_device seed_gen;
// std::mt19937 engine(seed_gen());
// std::uniform_int_distribution<int> dist(1, 13);

// class RandomIntFactory
// {
// public:
//     RandomIntFactory(): m_int_ptr(nullptr){};
//     ~RandomIntFactory()
//     {
//         delete m_int_ptr;
//     };

//     int* createInt()
//     {
//         m_int_ptr = new int;
//         *m_int_ptr = dist(engine);
//         return m_int_ptr;
//     }

// private:
//     int *m_int_ptr;
// };

// int main()
// {
//     RandomIntFactory* card_factory = new RandomIntFactory();
//     int *card_num_ptr = card_factory->createInt();

//     std::cout << *card_num_ptr << "\n";

//     delete card_factory;

//     std::cout << *card_num_ptr << "\n";

// }


#include <iostream>
#include <random>
#include <memory>

std::random_device seed_gen;
std::mt19937 engine(seed_gen());
std::uniform_int_distribution<int> dist(1, 13);

class RandomIntFactory
{
public:
    RandomIntFactory(): m_int_ptr(){};
    ~RandomIntFactory(){};

    std::unique_ptr<int> createInt()
    {
        m_int_ptr = std::make_unique<int>(dist(engine));
        //return m_int_ptr;
        return std::move(m_int_ptr);
    }

    void checkPtr()
    {
        if(m_int_ptr)
        {
            std::cout << "has value\n";
        }
        else
        {
            std::cout << "nullptr\n";
        }
    }

private:
    std::unique_ptr<int> m_int_ptr;
};

int main()
{
    RandomIntFactory* card_factory = new RandomIntFactory();
    std::unique_ptr<int> card_num_ptr = card_factory->createInt();
    // card_factory->checkPtr();

    std::cout << *card_num_ptr << "\n";

    delete card_factory;

    std::cout << *card_num_ptr << "\n";

}