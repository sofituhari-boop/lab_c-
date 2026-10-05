#include <iostream>

struct Prices
{
    int drink;
    int first;
    int second;
};

struct Choices
{
    int drink;
    int first;
    int second;
};

int customerTotal(Prices prices, Choices choices)
{
    return choices.drink * prices.drink
         + choices.first * prices.first
         + choices.second * prices.second;
}

int main()
{
    Prices prices { 10, 20, 30 };

    {
        Choices choices { 100, 0, 250 };

        int total = customerTotal(prices, choices);

        std::cout << total << std::endl;
    }

    {
        Choices choices { 0, 300, 0 };

        int total = customerTotal(prices, choices);

        std::cout << total << std::endl;
    }
}