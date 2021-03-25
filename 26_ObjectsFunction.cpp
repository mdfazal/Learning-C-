#include <iostream>

using namespace std;

class student {
    public:
        string name;
        string major;
        double gpa;
        student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            } 
                return false;
        }
};

int main()
{
    student student1("Jim", "Business", 2.4);
    student student2("Pam", "Art", 3.6);

    cout << student2.hasHonors();

    return 0;
}