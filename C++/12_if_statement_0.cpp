#include <iostream>

using namespace std;




int main()
{

    bool isMale = false                                     ;  // only create True or False
    bool isTall = true                                      ;    


    if(isMale && isTall)                                        // and == && , or == ||
    {
        cout << "It is Male And Tall"                << endl ;

    }

    else if(isMale && !isTall)                                  // ! == not tall 
    {
        cout << "It is Male And Short"               << endl ; 

    }

    else if(!isMale && isTall) 
    {
        cout << "It is Female And Tall"              << endl ; 

    }

    else
    {
        cout << "It is Female and Short"             << endl ;
    }

    return 0 ;

}