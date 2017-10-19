#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class point {
    public:
        point();
        point(int, int, int);
        void Negate();
        int Norm() const; 
        void Print() const;
        int X() const;
        int Y() const;
        int Z() const;
    private:
        int x, y, z;
};
#endif