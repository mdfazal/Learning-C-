#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,d=3;
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    a=0;
    b=1;
    c=0;
    cout << "The fibonacci series is ";
    cout << a;
    cout << b;
    while (d<=n)
    {
        c=a+b;
        cout << c;
        a=b;
        b=c;
        d=d+1;
    }
}
