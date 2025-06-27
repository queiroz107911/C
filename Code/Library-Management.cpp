#include <iostream>
#include <string.h>
#include <chrono>

#define MAX_BOOKS 100

struct Book {
    char title[100];
    char author[100];
    int year;
};

struct Library {
    struct Book books[MAX_BOOKS];
    int numBooks;
};

void addBook(struct  Library *library, const char *title, const char *author, int year) {
    if (library->numBooks < MAX_BOOKS) {
        struct Book newBook;
        strcpy(newBook.title, title);
        strcpy(newBook.author, author);
        newBook.year = year;

        library->books[library->numBooks] = newBook;
        library->numBooks++;

        printf("Book added successfully. \n");
    } else {
        printf("Library is full. Cannot add more books. \n");
    }

};

void displayBooks(struct Library library) {
    printf("Books in the library:\n");
    for (int i = 0; i < library.numBooks; i++) {
        printf("%d. Title: %s, Author: %s, Yeas: %d\n", i + 1, library.books[i].title, library.books[i].author, library.books[i].year);
    }
}

void searchBook(struct Library library, const char *title){
    printf("Search results:\n");
    for (int i = 0; i < library.numBooks; i++) {
        if ( strcmp(library.books[i].title, title) == 0) {
            printf("Title: %s, Author: %s, Year: %d\n", library.books[i].title, library.books[i].author, library.books[i].year);
            return;
        }
    }
    printf("Book not found.\n");
}

int main() {
    struct Library library;
    library.numBooks = 0;

    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: {
            char title[100];
            char author[100];
            int year;

            printf("Enter book title: ");
            scanf("%s", title);

            printf("Enter author name: ");
            scanf("%s", author);

            printf("Enter publication year: ");
            scanf("%d", &year);

            addBook(&library, title, author, year);
            break;
        }
            case 2:
                displayBooks(library);
                break;
            case 3: {
                char searchtitle[100];
                printf("Enter title to search: ");
                scanf("%s", searchtitle);
                searchBook(library, searchtitle);
                break;
        }
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}