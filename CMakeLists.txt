cmake_minimum_required(VERSION 3.27)
project(book_catalog)

set(CMAKE_CXX_STANDARD 17)

add_executable(book_catalog main.cpp
        models/Book/Book.cpp
        models/Book/Book.h
        models/Author/Author.cpp
        models/Author/Author.h
        models/BookCatalog/BookCatalog.cpp
        models/BookCatalog/BookCatalog.h
)
