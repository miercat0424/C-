#include <iostream>
using namespace std;

class student
{
    public: 
        string name ;
        string major;
        double gpa  ;

        student(string aName , string aMajor , double aGpa)
        {
            name = aName ;
            major = aMajor ;
            gpa = aGpa  ;

        }

        bool hasHonors() 
        {
            if(gpa >= 3.5)
            {
                return true ;
            }
            return false ;
            
        }

} ;

int main()
{
    student student0("Jake","Author",98.2)  ;
    student student1("Sake","Buthor",2.5)  ;

    cout << student0.hasHonors() << endl ; // True
    cout << student1.hasHonors() << endl ; // False

    return 0 ;
}