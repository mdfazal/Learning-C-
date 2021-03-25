#include <iostream>

using namespace std;

class book{
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    book book1;
    book1.title = "Harry Potter";
    book1.author = "J.K.Rowling";
    book1.pages = 500;

    book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkien";
    book2.pages = 700;
    book2.title = "Hunger Games";

    cout << book1.title;
    cout << book1.pages;
    cout << book2.title;
    cout << book2.pages;
    string name = "Fazal";
    double pi = 3.14;
    char favouriteLetter = 'G';
    
    return 0;

}