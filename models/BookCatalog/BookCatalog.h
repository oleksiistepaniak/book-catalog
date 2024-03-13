#ifndef BOOK_CATALOG_BOOKCATALOG_H
#define BOOK_CATALOG_BOOKCATALOG_H

#include <string>
#include <vector>
#include "../Book/Book.h"

using namespace std;


class BookCatalog {
public:
    BookCatalog(int identifier, string &title);
    int getIdentifier();
    string getTitle();
    void printInfoAboutBooks();

private:
    int identifier;
    string title;
    vector<Book> books;
};


#endif //BOOK_CATALOG_BOOKCATALOG_H
