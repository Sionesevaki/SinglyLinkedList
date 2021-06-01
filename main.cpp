//
//  main.cpp
//  SinglyLinkedListHW2
//
//  Created by Sione on 10/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include "OrderedMovieList.hpp"

using namespace std;

int main()
{
    OrderedMovieList movie_list;
    ifstream movie_db{"movies.txt"};
    if( movie_db ) {
        while( movie_db.good() ){
            movie_list.insert( Movie{ movie_db } );
        }
        movie_db.close();
        cout << "Alphabetical listing of movies available:\n"
        << movie_list << "\n\n";
    }
    else{
        cout << "file not found!\n";
    }
    
    return 0;
}
