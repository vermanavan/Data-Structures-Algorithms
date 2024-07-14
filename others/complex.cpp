#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double real = 0.0, double imaginary = 0.0) {
        this->real = real;
        this->imaginary = imaginary;
    }

    double getReal() const {
        return real;
    }

    double getImaginary() const {
        return imaginary;
    }

    Complex operator+(const Complex& other) const {
        double newReal = real + other.real;
        double newImaginary = imaginary + other.imaginary;
        return Complex(newReal, newImaginary);
    }

    Complex operator-(const Complex& other) const {
        double newReal = real - other.real;
        double newImaginary = imaginary - other.imaginary;
        return Complex(newReal, newImaginary);
    }

    Complex operator*(const Complex& other) const {
        double newReal = (real * other.real) - (imaginary * other.imaginary);
        double newImaginary = (real * other.imaginary) + (imaginary * other.real);
        return Complex(newReal, newImaginary);
    }

    Complex operator/(const Complex& other) const {
        double denominator = (other.real * other.real) + (other.imaginary * other.imaginary);
        double newReal = ((real * other.real) + (imaginary * other.imaginary)) / denominator;
        double newImaginary = ((imaginary * other.real) - (real * other.imaginary)) / denominator;
        return Complex(newReal, newImaginary);
    }

    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.7);
    Complex c2(1.8, 2.4);

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;
    Complex quotient = c1 / c2;

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    difference.display();

    cout << "Product: ";
    product.display();

    cout << "Quotient: ";
    quotient.display();

    return 0;
}
