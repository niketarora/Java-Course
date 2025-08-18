#include <iostream>
using namespace std;
class Scooty {  // parent class
public:
    int topSpeed;
    float mileage;
private:
    int bootSpace;
};

class Bike : public Scooty { // child class or derived class
public:
    int gears;
};

int main() {
    Bike b1;
    b1.topSpeed = 180;
    b1.mileage = 12.5;
    b1.gears = 6;
    return 0; // Added return 0 for successful execution of main
}