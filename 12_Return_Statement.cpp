#include <iostream>
#include <cmath>

double cube(double num){
    double result = num * num * num;
    return result;
}

using namespace std;

int main()
{
    double answer  = cube(5.0);
    cout << answer;
    return 0;
}