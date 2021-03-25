#include <iostream>


using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 3.5;
    double *pGpa = &gpa;
    string name = "Fazal";
    string *pName = &name;

    cout << pAge << endl;
    cout << *pAge << endl;
    cout << *&gpa << endl;
    cout << &*&gpa << endl;

    cout << "Age :" << &age << endl;
    cout << "gpa :" << &gpa << endl;
    cout << "Name :" << &name << endl;
    return 0;
}