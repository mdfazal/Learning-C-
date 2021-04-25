#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m=1,i;
    int a;
    cin >> a;

    for(i=a;i>=1;i--)
        {
            m= i*m;
        }
        cout << m;
}