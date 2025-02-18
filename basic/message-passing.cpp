// Import 
#include <iostream>

using namespace std;

class Car {
    public: 
        void displaySpeed(int speed) {
            cout << "Speed is " << speed << "Km/h" << endl;
        }
};

int main () {
    Car car;
    int speed = 500;
    car.displaySpeed(speed);
}