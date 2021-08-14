#include <iostream>

using namespace std;




int main()
{

    int numberGrid[3][2] =      // have to configure about lists
    {
        {1,2},
        {3,4},
        {5,6}
    }                                   ;

    for(int i = 0 ; i <=2 ; i++)
    {
        for(int j = 0 ; j <=1 ; j++)
        {
            cout << numberGrid[i][j] << endl ;
        }
    }


    return 0 ;
    
}