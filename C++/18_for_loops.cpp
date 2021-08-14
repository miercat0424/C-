#include <iostream>

using namespace std;

int main()
{

    int index   =   1   ;

    while(index <= 5)
    {
        cout << index << endl   ;
        index += 1              ;

    }   


    int nums[]  = {1,2,3,5,6,7} ;

    for(int i = 0 ; i <= 6; i += 1)
    {
        cout << nums[i] << endl   ;
    }


    return 0 ; 
}