//
//  OrderedMovieList.cpp
//  SinglyLinkedListHW2
//
//  Created by Sione on 10/10/17.
//  Copyright © 2017 FangaiuihaCode. All rights reserved.
//

#include "OrderedMovieList.hpp"

void OrderedMovieList::write(ostream& outfile) const
{
    if(head)
    {
        MovieNode *n = head;
        
        while(n)
        {
            n->getMovie().write(outfile);
            n = n->getNext();
        }
    }
    
    else
        return;

}

void OrderedMovieList::insert(const Movie& newMovie)
{
    MovieNode *prev = head;
    if(head)
    {
        MovieNode *n = head->getNext();
        
        if(!prev->getNext())
        {
            if(newMovie.title < prev->getMovie().title)
            {
                MovieNode *newMovieNode = new MovieNode(newMovie);
                newMovieNode->setNext(head);
                head = newMovieNode;
                
                return;
            }
        }
        
        while(n)
        {
            if(newMovie.title < n->getMovie().title)
            {
                MovieNode *newMovieNode = new MovieNode(newMovie);
                newMovieNode->setNext(n);
                prev->setNext(newMovieNode);
                break;
            }
            else
            {
                n = n->getNext();
                prev = prev->getNext();
            }
        }
    }
    else
    {
        MovieNode *newMovieNode = new MovieNode(newMovie);
        head = newMovieNode;
    }
    
    return;
}

Movie OrderedMovieList::removeFromHead (void)
{
    MovieNode* oldHead = head;
    Movie      oldMovie;
    if(!oldHead) // list was empty
    {
        throw length_error("Cannot remove from empty list.");
    }
    else
    {
        // point head to node following old head
        if(!oldHead->getNext()) // no node followed the old head
        {
            head = nullptr;
        }
        else // there was a node following old head
        {
            // save the customer data from the removed node for later return
            oldMovie = head->getMovie();
            head = head->getNext();
        }
        // delete the removed node
        delete oldHead;
    }
    return oldMovie;
}

void OrderedMovieList::erase(void)
{
    MovieNode *n = head;
    
    while(n)
    {
        removeFromHead();
        n = n->getNext();
    }
}

ostream& operator << (ostream& outfile, const OrderedMovieList& list)
{
    list.write(outfile);
    
    return outfile;
}




