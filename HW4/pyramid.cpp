#include "pyramid.h"

Pyramid::Pyramid(double h, _2Dshape *base, size_t pharaoh)
{
    std::cout << "Constructor : " << std::endl;
    this->height = h;
    this->base = base;
    if (pharaoh == 1)
        this->pharaoh = (char*)"Tutankhamun";
    if (pharaoh == 2)
        this->pharaoh = (char*)"Ramesses";
    if (pharaoh == 3)
        this->pharaoh = (char*)"Cleopatra";
}

Pyramid::Pyramid(const Pyramid &p1)
{
    std::cout << "Copy Constructor" << std::endl;
    this->height = p1.height;
    this->base = p1.base;
    this->pharaoh = p1.pharaoh;
}

Pyramid::Pyramid(const Pyramid &&p2)
{
    std::cout << "Move Constructor" << std::endl;
    this->height = std::move(p2.height);
    this->base = std::move(p2.base);
    this->pharaoh = std::move(p2.pharaoh);
}

double Pyramid::volume()
{
    return ((1 / 3) * (this->base->area()) * (this->height));
}

double Pyramid::area()
{
    return 38.18;
}

std::ostream& operator<<(std::ostream& os, const Pyramid& p)
{
    os << "Pharaoh " << p.pharaoh << "is buried in this pyramid!" << std::endl;
    return os;
}