#include <iostream>

using namespace std;

class Book 
{
    public  :
        string title;
        string author;
        int pages   ;

}; 




int main()
{
   
    Book book1;                             // call the class
    book1.title = "Harry Portter"       ;   // set the values
    book1.author= "JK Rowling"          ;
    book1.pages = 500                   ;

    Book book2 ;
    book2.title = "Reinforcement Learning"      ;
    book2.author = "Hi"                         ;
    book2.pages = 200                            ;

    cout << book1.title << endl ;   
    cout << book2.title << endl ;   



    return 0 ;

}