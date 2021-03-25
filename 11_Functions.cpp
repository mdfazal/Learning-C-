#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);

int main()
{
    
    sayHi("Mike", 60);
    sayHi("Lubna", 16);
    sayHi("Uzma", 20);
    return 0;
}

void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << "years old" << endl;
}