#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i;
    double a=0,b,c=0; int rev=0;
    cout << "enter a number";
    cin >> n;
        int copy=n;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c=c+1;
            }
        }
        while(copy!=0)
        {
            b=copy%10;
            rev=rev*10+b;
            copy=copy/10;
        }
        for(i=1;i<=rev;i++)
        {
            if(rev%i==0)
            {
                a=a+1;
            }
        }
        if(c==2 && a==2)
        {
        
            cout << " Twisted Prime Number";
        }
        else if(c==2 || a==2)
        {
        
            cout << " Not a Twisted Prime Number";
        }
        else
        {
            cout << "Not a Prime number";
        }
    
}

