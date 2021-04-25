#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cout << "Enter your first side ";
    cin >> a;

    int b;
    cout << "Enter your second side ";
    cin >> b;

    int c;
    cout << "Enter your third side ";
    cin >> c;

    if (a == b && b == c && c == a)
    {
        cout << "Its an Equilateral Triangle";
    } 
    else if(a == b || b == c)
    {
        cout << "Its an isoceles Triangle";
    }
    else 
    {
        cout << "Its a Scalene Triangle";
    }
}
