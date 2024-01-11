#include "Circle.hpp"

Circle::Circle() : Shape()
{
    r = 0;
}

Circle::Circle(int x, int y, float r) : Shape(x, y)
{
    this->r = r;
}

void Circle::setRadio(float r)
{
    this->r = r;
}

float Circle::getRadio()
{
    return r;
}

Circle::~Circle()
{
}
