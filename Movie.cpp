//
//  Movie.cpp
//  SinglyLinkedListHW2
//
//  Created by Sione on 10/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "Movie.hpp"
#include <string>
#include <iostream>

using namespace std;

Movie::Movie(istream& infile)
{
    string op;
    
    title = readMovie(infile);
    year = atoi(readMovie(infile).c_str());
    director = readMovie(infile);
    rating = readMovie(infile);
}

void Movie::write(ostream& outfile) const
{
    outfile << title << " " << "(" << year << ") " << rating << " - " << director << endl;
}

ostream& operator <<( ostream& outfile, const Movie& movie )
{
    movie.write(outfile);
    
    return outfile;
}

string readMovie(istream& infile)
{
    string info;
    string op;
    
    infile >> info;
    op = info;
    
    while(info != "|")
    {
        infile >> info;
        
        if(info == "|")
        {
            break;
        }
        else
        {
            op = op + info;
        }
    }
    
    return op;
}
