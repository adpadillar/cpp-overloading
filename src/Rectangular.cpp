#include "../include/Rectangular.h"

#include <iostream>
#include <ostream>
#include <sstream>
#include <string>

using namespace std;

Rectangular::Rectangular() : Rectangular(0, 0) {}

Rectangular::Rectangular(double x, double y) {
    this->x = x;
    this->y = y;
};

double Rectangular::getX() { return this->x; }

double Rectangular::getY() { return this->y; }

Rectangular Rectangular::suma(Rectangular r) {
    double newX = this->x + r.getX();
    double newY = this->y + r.getY();

    Rectangular newR = Rectangular(newX, newY);

    return newR;
}

Rectangular Rectangular::operator+(Rectangular r) {
    return this->suma(r);
};

string Rectangular::toString() {
    ostringstream s;

    s << "(" << this->x << ", " << this->y << ")";

    return s.str();
}

ostream& operator<<(ostream& stream, Rectangular& r) {
    return stream << r.toString();;
}