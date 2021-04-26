#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, sum=0;
    int n;
    cout << "Enter a numer" << endl;
    cin >> n;
    int a,b,c,d=3;
    a=0;
    b=1;
    c=0;
    System.out.println("The fibonacci series is ");
    System.out.println(a);
    System.out.println(b);
    while (d<=n)
    {
        c=a+b;
        System.out.println(c);
        a=b;
        b=c;
        d=d+1;
    }
}
