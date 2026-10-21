#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string model;
    double price;

    Car() {
        model = "Base Model";
        price = 0.0;
    }

    Car(string model, double price) {
        this->model = model;
        this->price = price;
    }

    Car(const Car &other) {
        this->model = other.model;
        this->price = other.price;
    }

    void printDetails() {
        cout << model << " costs $" << price << endl;
    }
};

int main() {
    Car defaultCar;
    Car sedan("Honda Civic", 25000);
    Car backupCar = sedan;

    defaultCar.printDetails();
    sedan.printDetails();
    backupCar.printDetails();

    return 0;
}