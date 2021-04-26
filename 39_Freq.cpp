#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, num;
    cout << "Enter a number" << endl;
    cin >> n;
    int m = n;
    int dig, p ;
    for(int i = 1;i<=9;i++)
        {
            m = n;
            int c=0;
            while(m>0)
            {
                dig=m%10;
                if(dig==i)
                {
                        c++;
                        p=dig;
                }
                m/=10;
                }
                if(c>=1)
                cout << "Frequency of " << i << "is" << c << endl;
            }
}