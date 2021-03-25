#include <iostream>

using namespace std;

class book{
    public:
        string title;
        string author;
        int pages;

    book(){
        title = "No Title";
        author = "no Author";
        pages = 0;
    }
    
    book(string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

int main()
{
    book book1("Harry Potter", "J.K.Rowling", 500);
    book book2("Lord of the Rings", "Tolkien", 700);
    book book3;
    cout << book1.title;
    cout << book3.title;
  
    return 0;

}