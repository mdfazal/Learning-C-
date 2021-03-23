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
    cout << phrase.find("awesome", 0);
    string phraseSub;
    phraseSub = phrase.substr(9,3);
    cout << phraseSub;

    return 0;
}