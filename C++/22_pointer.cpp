#include <iostream>
using namespace std;

int main()
{

    int     age =   19      ;
    double  gpa =   2.7     ;

    string  name    = "Mike"    ;
    
    // check Memories Pointer

    cout << "Age : " << &age << endl ;
    cout << "Gpa : " << &gpa << endl ;
    cout << "Name : " << &name << endl ;

    // ------------------------------------------------------

    int     *pAge   = &age;
    double  *pgpa   = &gpa;
    string  *pname  = &name;

    cout << " pAge : " << *pAge << endl ;
    cout << " pgpa : " << *pgpa << endl ;
    cout << " pname : " << *pname << endl ;



    return 0;

}