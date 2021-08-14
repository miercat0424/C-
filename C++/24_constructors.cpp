#include <iostream>
using namespace std;

class Book
{
    public :
        string title;
        string author;
        int pages ;

        Book()                          // <-- there are no information
        {
            title = "no title"      ;
            author = "no author"    ;
            pages = 0     ;
        }

        Book(string atitle , string aauthor , int apages) // <-- with information
        {
            title = atitle , author = aauthor , pages = apages ;
        } 

}   ; // <<------ important don't forget 

int main()
{
    Book book1("Harry" , "JK" , 200) ;
    cout << book1.title << endl ;

    Book book2("Jerry" , "PK",200) ;
    cout << book2.title << endl ;

    Book book3    ;
    cout << book3.title << endl ;

    return 0 ; 
}