#include "shape.hpp"

Shape::Shape()
{
    x = 0;
    y = 0;
}

Shape::Shape(int x, int y)
{
    this->x = x;
    this->y = y;
}

string Shape::draw()
{
    return "Soy";
}

void Shape::setX(int x)
{
    this->x = x;
}

void Shape::setY(int y)
{
    this->y = y;
}

int Shape::getX()
{
    return x;
}

int Shape::getY()
{
    return y;
}

Shape::~Shape()
{
    // dor
}