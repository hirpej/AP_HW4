#include "square.h"

Square::Square(double s)
{
    side = s;
}

double Square::perimeter()
{
    return (4 * side);
}

double Square::area()
{
    return (side * side);
}

void Square::disp()
{
    for (int width = 1; width <= side; width++)
    {
        if (width <= 1)
            for (int width = 1; width <= side; width++)
            {
                std::cout << "*";
            }
        else if (width < side)
        {
            std::cout << std::endl;
            for (int width2 = 1; width2 <= side; width2++)
            {
                if (width2 == 1 || width2 == side)
                    std::cout << "*";
                else
                    std::cout << " ";
            } //end of for  variable width2
        }     // end of else if
        else
        {
            std::cout << std::endl;
            for (int width3 = 1; width3 <= side; width3++)
            {
                std::cout << "*";
            } //end of for having variable width3
        }     // end of else
    }         // end of first for loop
}