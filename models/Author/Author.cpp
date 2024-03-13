#include "Author.h"
#include <iostream>

Author::Author(int identifier, std::string &name, std::string &surname)
{
    this->identifier = identifier;
    this->name = name;
    this->surname = surname;
}

void Author::addBook(Book book)
{
    this->books.push_back(book);
    cout << "Book by id: " << book.getIdentifier() << " was added to author "
         << this->identifier << endl;
}

void Author::printInfoAboutBooks()
{
    cout << "##########INFO ABOUT BOOKS BY AUTHOR ID: " << this->identifier
         << "##########" << endl;
    for (Book book: this->books)
    {
        book.printInfo();
    }
    cout << "#####################################################" << endl;
}

void Author::printInfo()
{
    cout << "##########INFO ABOUT AUTHOR BY ID: " << this->identifier << "##########" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Surname: " << this->surname << endl;
}

int Author::getIdentifier()
{
    return this->identifier;
}

string Author::getName()
{
    return this->name;
}

string Author::getSurname()
{
    return this->surname;
}