#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, num, sum=0, sum1=0;
    int r;
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    num = n;
    while(num>0)
    {
        a=num%10;
        if(a!=0)
        {
            sum = sum *10 + a;
        }
        num=num/10;
    }
    while (sum>0)
    {
        r=sum%10;
        sum1 = sum1 * 10+r;
        sum=sum/10;
    }
    cout << sum1; 
}
