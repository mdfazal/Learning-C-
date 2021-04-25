#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double area;
    int c;
    float r;
    cout << "1. Area of a Circle";
    cout << "2.Area of a Square";
    cout << "3.Area of a rectangle";
    cout << "Enter your Choice";

    switch (c)
    {
    case 1:
        cout << "Enter the radius of the circle";
        cin >> r;
        area = 3.14*r;
        cout << "Area of the circle is "<< area ;
        break;
    
    default:
        break;
    }
}