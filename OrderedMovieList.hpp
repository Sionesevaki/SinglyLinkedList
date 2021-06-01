//
//  OrderedMovieList.hpp
//  SinglyLinkedListHW2
//
//  Created by Sione on 10/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#ifndef OrderedMovieList_hpp
#define OrderedMovieList_hpp

#include <stdio.h>
#include <string>
#include <ostream>
#include "Movie.hpp"
#include "MovieNode.hpp"

class OrderedMovieList
{
public:
    OrderedMovieList
    (void)     = default;
    void          write
    (ostream& outfile) const;
    void          addAtHead
    (const Movie& newMovie);
    void insert(const Movie& newMovie);
    Movie removeFromHead (void);
    void erase (void);
    
private:
    MovieNode* head = nullptr;
};
ostream&      operator <<
(ostream& outfile, const OrderedMovieList& list);


#endif /* OrderedMovieList_hpp */
