#include <iostream>

using namespace std;

class Movie
{
    private : // <-- make parameters only in this 'Movie' class
        string rating ; //  <-- 'cout << Avengers.rating ' cannot be printed cuz it's Movies' private
    
    public : // <-- make parameters in Whole codes
        string title ;
        string director ;

        
        // Create function 
        Movie(string aTitle , string aDirector , string aRating) // --> def 생성시에 () 와 {} 가 필요하다.
        {
            title = aTitle ;
            director = aDirector ;
            rating = aRating ;  // <-- so we can use this varialbe in this Movie class
        }

        void setRating(string aRating) // <-- wanna control objects in classes , can use void
        {
            rating = aRating ;
        }

        string getRating()
        {
            return rating ;
        }
} ;

int main()
{   
    Movie Avengers("End","Mike","PG-13")  ;

    Avengers.setRating("PG-10") ;

    // cout << Avengers.rating << endl ; // <-- we cannot use this parameter cuz it's none parameter
    cout << Avengers.getRating() << endl ; // <-- we cannot use this parameter cuz it's none parameter

    return 0 ; 
}