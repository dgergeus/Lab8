//include headers and libraries
#include "Library.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
    Library library;
    char usercommand;
    string bookName;
    bool result;
    
    //ask for commands and execute
    while(usercommand != 'q')
    {
        cout << "Enter command (a/r/p/q): ";
        cin >> usercommand;
        if(usercommand == 'a')
        {
            cout << "Enter book name: ";
            cin >> bookName;
            result = library.addBook(bookName);
            if(result == false)
            {
                cout << "Book already exists or library is full." << endl;
            }
        }
        else if(usercommand == 'r')
        {
            cout << "Enter book name: ";
            cin >> bookName;
            result = library.removeBook(bookName);
            if(result == false)
            {
                cout << "Book does not exist." << endl;
            }
        }
        else if(usercommand == 'p')
        {
            library.print();
        }
    }


}