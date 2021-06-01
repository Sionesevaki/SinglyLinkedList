//
//  Movie.hpp
//  SinglyLinkedListHW2
//
//  Created by Sione on 10/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include <string>
#include <ostream>

using namespace std;

struct Movie {
    
   Movie (void) = default;
   Movie (string name, unsigned short year, string director, string rate): title{name}, year{year}, director{director} , rating{rate} { }

    string    title;      /// Movie title
    unsigned short year;       /// Movie release year
    string    director;   /// Director's name
    string    rating;     /// Movie audience rating
    
    Movie(istream& infile ); /// construct given an input stream
    void write
    (ostream& outfile ) const;
    string readMovie(istream& infile);
};
ostream&  operator <<
( ostream& outfile, const Movie& movie );

#endif /* Movie_hpp */
