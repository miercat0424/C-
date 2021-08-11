#include <iostream>

using namespace std;

int main()
{
    
    int     num1,num2                   ;
    char    op                          ;

    cout << "Enter 1 Number : "         ;
    cin  >> num1                        ;
    cout << "Enter operator : "         ;
    cin  >> op                          ;
    cout << "Enter 2 Number : "         ;
    cin  >> num2                        ;

    int result                          ;


    if(op == '+')
    {
        result = num1 + num2            ;
    }
    else if(op == '-')
    {
        result = num1 - num2            ;
    }
    else if(op == '*')
    {
        result = num1 * num2            ;
    }
    else if(op == '/')
    {
        result = num1 / num2            ;
    }
    else
    {
        cout << "Wrong Inputs"          ;
    }

    cout << result                      ;
    
    return 0;

}