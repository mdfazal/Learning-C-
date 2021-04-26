#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int r1, r2, number, num1, num2, count = 0;  
    cout << "Enter the number you want to check: ";   
    cin >> number;
    num1 = number;  
    num2 = number;  

    while (num1 > 0)  
    {     
        r1 = num1 % 10;  
        while (num2 > 0)  
        {   
            r2 = num2 % 10;  
 
            if (r1 == r2)  
            {   
                count++;  
            }  
            num2 = num2 / 10;  
        }  
        num1 = num1 / 10;  
    }  
    if (count == 1)  
    {  
        cout << "The number is unique.";  
    }  
    else  
    {  
    cout << "The number is not unique.";  
    }  
}
