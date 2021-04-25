#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double area;
    int c;
    float r, s, l , b;
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

    case 2:
        cout << "Enter the side of the square";
        cin >> s;
        area = s*s;
        cout << "Area of the square is "<< area ;
        break;

    case 3:
        cout << "Enter the length of the rectangle";
        cin >> l;
        cout << "Enter the breadth of the rectangle";
        cin >> b;
        area = l*b;
        cout << "Area of the rectangle is "<< area ;
        break;
    
    default:
        break;
    }
}