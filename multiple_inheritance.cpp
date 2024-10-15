/*
// Name : Siddhant Bedre
// PRN : 23070123037
Aim: Multiple Inheritance
*/
#include <iostream>
using namespace std;

class Vehicle {
public:
    string company = "Ford";
    void type() {
        cout << "Mustang" << endl;
    }
};

class Specs {
public:
    string mileage = "8 kmph";
    void colour() {
        cout << "Grey" << endl;
    }
};

class Car: public Vehicle, public Specs {
public:
    string seater = "4 seater";
};

int main() {
    Car f2;
    f2.colour();
    cout << f2.company << " ";
    f2.type();
    cout << "(" << f2.seater << ")" << endl << "MILEAGE: " << f2.mileage << endl;
    return 0;
}
/* output
Grey
Ford Mustang
(4 seater)
MILEAGE: 8 kmph
8*/
