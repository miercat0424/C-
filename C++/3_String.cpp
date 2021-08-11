#include <iostream>

using namespace std;

int main()
{
    // note endl == \n
    cout << "1_iraffe Academy"      << endl ;
    cout << "1_Hello"               << endl ;
    // ------------------------------------------------------------------------
    cout << "2_Girafe Academy \n2_Hello"\
                                    << endl ;
    // ------------------------------------------------------------------------
    string phrase = "3_Giraffe Academy";
    cout << phrase                  << endl;
    // ------------------------------------------------------------------------
    cout << phrase.length()         << endl;    // same with len() in Python
    // ------------------------------------------------------------------------
    phrase[0] = 'B' ;                           // '' & "" is different // char & string
    cout << phrase[0]               << endl;    // same with Python list[0]     
    // ------------------------------------------------------------------------                     
    cout << phrase.find("Academy",0)<< endl;    // find = find str what i want , and show where it is // Academy start after 10 letters
    // ------------------------------------------------------------------------
    cout << phrase.substr(10,3)     << endl;    // substr = find str start on 10 and take 3 letters from str
    // ------------------------------------------------------------------------
    string phrasesub = phrase.substr(10,3) ;    // can use like this way (parameter)
    cout << phrasesub               << endl;

    return 0 ;

}