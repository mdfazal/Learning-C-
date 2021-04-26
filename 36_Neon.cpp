#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int product, product1 ,d, sum=0;
    int n, num;
    cout << "Enter a number";
    cin >> n;
    product = n*n;
  
    while (product > 0)
    {
        d = (int) product%10;
        sum = sum+d;
        product = product/10;
    }
    if(sum == n)
    {
        cout << "Its a neon number";
    }
    else
    {
        cout << "Its not a neon number";
    }
}