#include <iostream>

using namespace std;

class student {
    public:
        string name;
        string major;
        string gpa;
        student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }
};

int main()
{
    student student1("Jim", "Business", 2.4);
    student student2("Pam", "Art", 3.6);

    return 0;
}