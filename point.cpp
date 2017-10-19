#include "point.h"
#include <math.h>

int point::X() const { return x; }
int point::Y() const { return y; }
int point::Z() const { return z; }

point::point() {
    x = 0;
    y = 0;
    z = 0;
}

point::point(int x1, int y1, int z1) {
    x = x1;
    y = y1;
    z = z1;
}

void point::Negate() {
    x = -x;
    y = -y;
    z = -z;
}

int point::Norm() const{
    cout <<  sqrt((x * x) + (y * y)) << endl;;
}



void point::Print() const {
    cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
}

