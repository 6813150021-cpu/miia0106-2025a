// lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


    double calculateCircleArea(double x)
    {
        double PI = 3.14159;
        double area = PI * x * x;
        return area;
    }

    float ractangle(float w, float l)
    {
        return w * l;
    }
    int main() {


        const double PI = 3.14159;
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        double area = calculateCircleArea(radius);
        cout << "The area of the circle with radius " << radius << " is " << area << endl;

    float w, l;
        cout << "width : ";
        cin >> w;
        cout << "long : ";
        cin >> l;
        float ractangle(float w, float l);
        cout << "The area " << ractangle(w, l) << endl;

        cout << "********* answer **********" << endl;
        cout << "The area of the circle with radius " << radius << " is " << area << endl;
        cout << "The area of the Rectangle  " << ractangle(w, l) << endl;

        return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
