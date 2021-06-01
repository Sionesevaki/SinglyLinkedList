//
//  MovieNode.hpp
//  SinglyLinkedListHW2
//
//  Created by Sione on 10/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef MovieNode_hpp
#define MovieNode_hpp

#include <stdio.h>
#include <string>
#include <ostream>
#include "Movie.hpp"

using namespace std;

class MovieNode
{
public:
    MovieNode (Movie movie);
    Movie      getMovie(void) const;
    MovieNode* getNext (void) const;
    void          setNext (MovieNode* newNext);
    void          write (ostream& outfile) const;
    bool operator < ( const MovieNode& rhs ) const;
private:
    Movie movie;
    MovieNode* next = nullptr;
};
ostream&  operator << (ostream& outfile, const MovieNode& node);


#endif /* MovieNode_hpp */
