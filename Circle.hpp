#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "shape.hpp"

class Circle : public Shape
{
private:
    float r;

public:
    Circle();
    Circle(int x, int y, float r);
    void setRadio(float r);
    float getRadio();
    virtual ~Circle();
};

#endif