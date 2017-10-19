#include "point.h"
#include <iostream>
using namespace std;

int main() {
    point p1(5,3,3);
    
    p1.Print();
    p1.Negate();
    p1.Print();


    cout << p1.Norm() << endl;
   
} 