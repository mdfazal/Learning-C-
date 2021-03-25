#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age ";
    cin >> age;
    cout << "You are " << age << " years old"; 

    double age1;
    cout << "Enter your age ";
    cin >> age1;
    cout << "You are " << age1 << " years old"; 

    char age2;
    cout << "Enter your age ";
    cin >> age2;
    cout << "You are " << age2 << " years old"; 

    string name;
    cout << "Enter your name ";
    getline(cin,name); 
    cout << "Hello " << name;


    return 0;
}