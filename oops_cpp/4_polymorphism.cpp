#include <iostream>

class ComplexNumber {
private:
    int real;
    int imag;

public:
   
    ComplexNumber(int r = 0, int i = 0) : real(r), imag(i) {}

   
    ComplexNumber operator+(const ComplexNumber& other) {
        ComplexNumber result;
        result.real = this->real + other.real;
        result.imag = this->imag + other.imag;
        return result;
    }

   
    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    ComplexNumber c1(3, 4);
    ComplexNumber c2(1, 2);

   
    ComplexNumber c3 = c1 + c2;

    std::cout << "c1: ";
    c1.display();

    std::cout << "c2: ";
    c2.display();

    std::cout << "c3 (c1 + c2): ";
    c3.display();

    return 0;
}