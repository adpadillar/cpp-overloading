#ifndef RECTANGULAR_H
#define RECTANGULAR_H

#include <iostream>
#include <ostream>
#include <string>

using namespace std;

class Rectangular {
   private:
    double x, y;

   public:
    Rectangular();
    Rectangular(double x, double y);

    double getX();
    double getY();

    Rectangular suma(Rectangular r);
    Rectangular operator+(Rectangular r);

    string toString();

    friend ostream& operator<<(ostream& stream, Rectangular& r);
};

#endif  // !RECTANGULAR_H
