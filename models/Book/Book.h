#ifndef BOOK_CATALOG_BOOK_H
#define BOOK_CATALOG_BOOK_H

#include <string>

using namespace std;

class Book {
public:
    Book(int identifier, string &title, int publishedYear, string &genre, int authorIdentifier);
    int getIdentifier() const;
    string getTitle();
    int getAuthorIdentifier() const;
    int getPublishedYear() const;
    string getGenre();
    void printInfo();

private:
    int identifier;
    string title;
    int authorIdentifier;
    int publishedYear;
    string genre;
};


#endif //BOOK_CATALOG_BOOK_H
