#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int d, revnum=0, num;
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    num = n;
    while(num > 0)
    {
        d = (int)num%10;
        revnum = revnum*10+d;
        num = num/10;
    }
    if(revnum == n)
    {
        cout << "This is a pallindrome number";
    }
    else
    {
        cout << "This is not a Pallindrome number";
    }
}
