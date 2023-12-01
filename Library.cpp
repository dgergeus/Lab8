#include "Library.h"
#include <string>
#include <iostream>

using namespace std;

Library::Library(){
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}

//implement class functions

bool Library::addBook(string bookName)
{
    for(int i = 0; i < 10; i++)
    {
        if(books[i] == bookName)
        {
            return false;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        if(books[i] == "")
        {
            books[i] = bookName;
            return true;
        }
    }
    return false;
}


bool Library::removeBook(string bookName)
{
    for(int i = 0; i < 10; i++)
    {
        if(books[i] == bookName)
        {
            books[i] = "";
            return true;
        }
    }
    return false;
}


void Library::print()
{
    for(int i = 0; i < 10; i++)
    {
        if(books[i] != "")
        {
            cout << books[i] << endl;
        }
    }
}



