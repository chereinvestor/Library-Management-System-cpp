# Library-Management-System-cpp




A simple console-based Library Management System built in C++. This project 
allows users to manage a collection of books, including adding, searching, 
issuing, and returning books, using core C++ concepts like structs, functions, 
and file handling.

## Features

- Add new books to the library
- Display all books in the library
- Search for a book by title or ID
- Issue a book to a borrower
- Return a book
- Delete a book record
- Data persistence using file handling (books saved to a `.txt` file)

## Concepts Used

- `struct` for storing book data (title, author, ID, availability status)
- Functions for modular operations (add, search, issue, return)
- File I/O (`fstream`) to save and load book data between sessions
- `vector` for storing and managing the list of books
- `<iomanip>` for formatted table-style output

## How to Compile and Run

```bash
g++ main.cpp -o library
./library
```

## Sample Output

===== Library Management System =====

- Add Book
- Display All Books
- Search Book
- Issue Book
- Return Book
- Exit
- Enter your choice:

## Future Improvements

- Add user authentication (admin/member login)
- Support for fines on overdue books
- Switch from text file storage to a database (SQLite)

## Author

Chernet Lire








