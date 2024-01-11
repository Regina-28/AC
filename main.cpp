#include <iostream>
#include "shape.hpp"
#include "Circle.hpp"

using namespace std;

int main()
{
    Shape figura1(10, 20);
    figura1.draw();
    cout << figura1.draw() << "con valor x en: " << figura1.getX() << "y con valor en y de: " << figura1.getY() << endl;

    Circle c1(10, 20, 30.1);
    cout << c1.draw() << "con un valor de x en: " << c1.getX() << "y con un valor de y en:" << c1.getY() << endl;
    return 0;
}