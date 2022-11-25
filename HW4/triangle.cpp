#include "triangle.h"

Triangle::Triangle(double b, double s)
{
    base = b;
    side = s;
}

double Triangle::perimeter()
{
    return (base + 2 * side);
}

double Triangle::area()
{
    double h{};
    h = sqrt((side * side)-(0.25 * base * base));
    return (0.5 * h * base);
}

void Triangle::disp()
{
    int z = 1;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 7; j > i; j--)
        {
            std::cout << " "; // displaying space here
        }
        std::cout << "*"; // displaying asterisk here

        if (i != 0)
        {
            for (int k = 1; k <= z; k++)
            {
                std::cout << " ";
            }
            std::cout << "*";
            z += 2;
        }
        std::cout << std::endl; // endl is for new line
    }

    for (int i = 0; i <= z + 1; i++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
}