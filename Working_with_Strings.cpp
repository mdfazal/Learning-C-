#include <iostream>

using namespace std;

int main()
{
    cout << "Giraffe Academy \n";
    cout << "Hello" <<endl;
    string phrase = "Fazal is awesome";
    cout << phrase;
    cout << phrase.length();
    cout << phrase[0];
    phrase[0] = 'B';
    cout << phrase;

    return 0;
}