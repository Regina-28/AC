#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

using namespace std;

class Shape
{
private:
    int x, y;

public:
    Shape();
    Shape(int x, int y);
    string draw();
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
    virtual ~Shape(); // virtual es que un método va a ser polimórfico (~ es un destructor)
};

#endif // SHAPE_H