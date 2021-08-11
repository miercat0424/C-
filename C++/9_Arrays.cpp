#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    int luckyNums[20] = {4, 8, 15, 16, 23, 24}      ;
    

    cout << luckyNums                       << endl ;
    cout << luckyNums[0]                    << endl ;
    luckyNums[0] = 19                               ;
    cout << luckyNums[0]                    << endl ;

    luckyNums[10] = 190                             ;
    cout << luckyNums[10]                   << endl ;


    return 0; 

}