#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int luckyNums[] = {4,8,15,16,23,42};
    luckyNums[0] = 19;
    cout << luckyNums[0];

    int luckyNum[20] = {4,8,15,16,23,42};
    luckyNum[10] = 100;
    cout << luckyNum[10];
    return 0;
}