#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // char    age                                         ;

    // cout << "Enter your age : "                 << endl ;
    // cin  >> age                                         ; 

    // cout << "You are " << age << " years old "  << endl ;

    // --------------------------------------------------------

    string  name                                        ;
    cout << " Enter your name again : "                 ;
    getline(cin, name)                                  ;       // if i use char it only take 1 letter , but with string and getline it takes lines that you write
    cout << "Hello " << name                    << endl ;


    




    return 0 ;

}