#include <iostream>
#include <cmath>        // wanna use math function

using namespace std;


int main()
{
    cout << pow(2,5)        << endl;    // 2**5 (2 ^ 5)
    cout << sqrt(36)        << endl;    // root(36)

    cout << round(4.3)      << endl;    // 반올림
    cout << ceil(4.1)       << endl;    // 올림
    cout << floor(4.9)      << endl;    // 내림

    cout << fmax(3,10)      << endl;    // show bigger number
    cout << fmin(3,10)      << endl;    // show smaller number.

    cout << sin(3)          << endl;    // sin & cos & ... etc


    return 0;

}