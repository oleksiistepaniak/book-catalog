#include "Book.h"
#include <string>
#include <iostream>

using namespace std;

Book::Book(int identifier, string &title, int publishedYear, string &genre, int authorIdentifier)
{
    this->identifier = identifier;
    this->title = title;
    this->publishedYear = publishedYear;
    this->genre = genre;
    this->authorIdentifier = authorIdentifier;
}

int Book::getIdentifier() const
{
    return this->identifier;
}

string Book::getTitle()
{
    return this->title;
}

int Book::getAuthorIdentifier() const
{
    return this->authorIdentifier;
}

int Book::getPublishedYear() const
{
    return this->publishedYear;
}

string Book::getGenre()
{
    return this->genre;
}

void Book::printInfo()
{
    cout << "##########INFO ABOUT BOOK BY ID: " << this->identifier << "##########" << endl;
    cout << "Title: " << this->title << endl;
    cout << "Published year: " << this->publishedYear << endl;
    cout << "Genre: " << this->genre << endl;
    cout << "Author identifier: " << this->authorIdentifier << endl;
}