#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = true;

    if(isMale && isTall)
    {
        cout << "You are a tall male";
    }else if (isMale && !isTall)
    {
        cout << "You are a short Male";
    }else if(!isMale && isTall)
    {
        cout << "You are tall but not a male";
    }else
    {
        cout << "You are not male and not tall";
    }

    
    return 0;
}