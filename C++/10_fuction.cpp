#include <iostream>

using namespace std;


void SayHi(string Name , int Age) 
{

    cout << "Hello User " << Name << " I'm " \
    << Age << " years old" << endl ;

}


int main()                          // execute main program
{

    SayHi("Mikes" , 25)                                      ;
    SayHi("Toms" , 25)                                       ;
    SayHi("James" , 25)                                      ;

    return 0 ;

}