//
//  MovieNode.cpp
//  SinglyLinkedListHW2
//
//  Created by Sione on 10/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "MovieNode.hpp"

MovieNode::MovieNode(Movie movie)
{
    this->movie = movie;
    next = nullptr;
}

Movie MovieNode::getMovie() const
{
    return movie;
}


MovieNode* MovieNode::getNext(void) const
{
    return next;
}

void MovieNode::setNext(MovieNode* newNext)
{
    if(this->getNext())
    {
        newNext = this->next;
        this->next = newNext;
    }
    else
    {
        this->next = newNext;
    }
}

void MovieNode::write(ostream& outfile) const
{
    movie.write(outfile);
}

ostream& operator << (ostream& outfile, const MovieNode& node)
{
    node.write(outfile);
    
    return outfile;
}

bool MovieNode::operator < ( const MovieNode& rhs ) const
{
    if(movie.title < rhs.getMovie().title)
    {
        return true;
    }
    else
        return false;
}

