#include <iostream>

using namespace std;


int main()
{

    int index0 = 1 , index1 = 1                        ;

    while(index0 <= 10)
    {
        cout << index0 << " \ttimes repeated " << endl ;
        index0 += 1                                    ;
    }

    cout << "------------------------------  " << endl ;
    
    // do need while --> 'do' is not need that technically , kind of useful some situation
    do
    {
        cout << index1 << " \ttimes repeated " << endl ;
        index1 += 1                                    ;
    }
    while(index1 <= 10)                                ; 

    return 0 ;
    
}