#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, sum=0;
    int n;
    cout << "Enter a numer" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)
    {
        cout << "Its a perfect number";
    }
    else
    {
        cout << "Its not a perfect number";
    }
}