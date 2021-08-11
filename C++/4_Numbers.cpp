#include <iostream>

using namespace std;

int main() 
{
    // -------------------------------------
    cout << " + : " << 5 + 7    << endl;
    cout << " * : " << 5 * 7    << endl;
    cout << " / : " << 5 / 7    << endl;
    cout << " % : " << 5 % 7    << endl;
    // -------------------------------------
    int    wnum = 5     ;
    double dnum = 5.5   ;
    
    wnum ++             ;                   // adding value (+1) += , -= , *= , /= etc ...
    cout << " wnum : "<< wnum   << endl;
    cout << 10/3                << endl;    // set automatically integer
    cout << 10.0/3.0            << endl;    // set automatically decimal number
    // -------------------------------------
    
    return 0 ;
}