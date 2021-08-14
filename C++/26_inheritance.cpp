#include <iostream>
using namespace std;

class chef 
{
    public : 
        void makeChicken()
        {
            cout << "The Chef makes Chicken" << endl ;
        }

        void makeSalad()
        {
            cout << "The Chef makes Salad" << endl ;
        }
        void makeSpecialDish()
        {
            cout << "The chef makes bbq rips" << endl ;
        }

};

class ItalianChef : public chef // <-- ItalianChef inherite all function in chef
{
    public : // <-- must write PUBLIC when you make CLASS
        void makePasta()
        {
            cout << "The chef makes Pasta" << endl ;
        }

};


int main()
{

    chef master ;
    master.makeSalad() ;

    ItalianChef master2 ;
    master2.makeSpecialDish() ;
    master2.makePasta() ;


    return 0 ;
}
