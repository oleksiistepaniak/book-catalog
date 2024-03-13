#ifndef BOOK_CATALOG_AUTHOR_H
#define BOOK_CATALOG_AUTHOR_H

#include <string>
#include <vector>
#include "../Book/Book.h"

using namespace std;

class Author {
public:
    Author(int identifier, string &name, string &surname);
    int getIdentifier();
    string getName();
    string getSurname();
    void addBook(Book book);
    void printInfoAboutBooks();
    void printInfo();

private:
    int identifier;
    string name;
    string surname;
    vector<Book> books;
};


#endif //BOOK_CATALOG_AUTHOR_H
