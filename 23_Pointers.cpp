#include <iostream>


using namespace std;

int main()
{
    int age = 19;
    double gpa = 3.5;
    string name = "Fazal";

    cout << "Age :" << &age << endl;
    cout << "gpa :" << &gpa << endl;
    cout << "Name :" << &name << endl;
    return 0;
}