#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, j,k;
    for (i = 1; i<=5;i++)
    {
        for (j = 1; j<=5;j++)
        {
            if (j <= i) {

                    cout << i;

                } else {

                    cout << j;
                }

        }
        
        cout << endl;
    }
}