#include <iostream>

using namespace std;

int getMax(int num1 , int num2)
{

    int result                                  ; 

    if(num1 > num2)
    {
        result = num1                           ;
        cout << "It is [" << result << "]"<<endl;
    }

    else if(num1 < num2)
    {
        result = num2                           ;
        cout << "It is [" << result << "]"<<endl;
    }

    else
    {
        result = num1                           ;
        cout << "Same  [" << result << "]"<<endl;
    }

    return result                               ;

}


int main()
{

    getMax(1,2)                                 ;
    getMax(3,1)                                 ;
    getMax(4,4)                                 ;

    return 0 ; 

}