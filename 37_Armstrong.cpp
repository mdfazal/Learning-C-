#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int d, sum=0, num;
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    num = n;
    while(num > 0)
    {
        d = (int)num%10;
        sum = sum+d*d*d;
        num = num/10;
    }
    if (n == sum)
    {
        cout << "Its a armstrong number";
    }
    else
    {
        cout << "Its not a armstrong number";
    }
}
