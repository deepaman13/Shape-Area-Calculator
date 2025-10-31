#include <iostream>
using namespace std;

class Shape {
public:
    virtual void getData() = 0;
    virtual float area() = 0;
};

class Circle : public Shape {
    float radius;
public:
    void getData() {
        cout << "Enter radius: ";
        cin >> radius;
    }
    float area() {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
    float length, breadth;
public:
    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    float area() {
        return length * breadth;
    }
};

class Triangle : public Shape {
    float base, height;
public:
    void getData() {
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
    }
    float area() {
        return 0.5 * base * height;
    }
};

int main() {
    Shape *shape;
    int choice;

    while (true) {
        cout << "\n--- Shape Area Calculator ---";
        cout << "\n1. Circle\n2. Rectangle\n3. Triangle\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 4) break;

        switch (choice) {
            case 1: {
                Circle c;
                shape = &c;
                shape->getData();
                cout << "Area of Circle: " << shape->area() << endl;
                break;
            }
            case 2: {
                Rectangle r;
                shape = &r;
                shape->getData();
                cout << "Area of Rectangle: " << shape->area() << endl;
                break;
            }
            case 3: {
                Triangle t;
                shape = &t;
                shape->getData();
                cout << "Area of Triangle: " << shape->area() << endl;
                break;
            }
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}