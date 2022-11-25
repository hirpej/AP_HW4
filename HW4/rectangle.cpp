#include "rectangle.h"

Rectangle::Rectangle(double l, double w)
{
    length = l;
    width = w;
}

double Rectangle::perimeter()
{
    return (2 * (length + width));
}

double Rectangle::area()
{
    return (length * width);
}

void Rectangle::disp()
{
    std::cout << "*";
    for (int i = 0; i < width - 2; i++)
    {
        std::cout << "*";
    }
    std::cout << "*\n";

    for (int i = 0; i < length - 2; i++)
    {
        std::cout << "*";
        for (int j = 0; j < width - 2; j++)
        {
            std::cout << " ";
        }
        std::cout << "*\n";
    }

    std::cout << "*";
    for (int i = 0; i < width - 2; i++)
    {
        std::cout << "*";
    }
    std::cout << "*\n";
}