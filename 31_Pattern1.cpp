#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, j;
    for (i = 1; i<=5; i++)
    {
        for (j=1; j<=i;j++)
        {
            cout << j;
        }
        cout << endl;
    }
}