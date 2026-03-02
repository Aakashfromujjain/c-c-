#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;
    string publisher;
    int stock;

public:
    // Constructor
    Book(string t, string a, double p, string pub, int s) {
        title = t;
        author = a;
        price = p;
        publisher = pub;
        stock = s;
    }

    // Getters
    string getTitle() { return title; }
    string getAuthor() { return author; }
    double getPrice() { return price; }
    string getPublisher() { return publisher; }
    int getStock() { return stock; }

    // Update stock
    void setStock(int s) { stock = s; }

    // Display book details
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Stock: " << stock << endl;
    }
};

class BookShop {
private:
    Book* books[50];
    int bookCount;

public:
    // Constructor
    BookShop() {
        bookCount = 0;
    }

    // Add new book
    void addBook() {
        if (bookCount >= 50) {
            cout << "Cannot add more books. Inventory full!" << endl;
            return;
        }

        string title, author, publisher;
        double price;
        int stock;

        cout << "\n--- Add New Book ---" << endl;
        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter price: $";
        cin >> price;

        cout << "Enter publisher: ";
        cin.ignore();
        getline(cin, publisher);

        cout << "Enter stock quantity: ";
        cin >> stock;

        books[bookCount] = new Book(title, author, price, publisher, stock);
        bookCount++;

        cout << "Book added successfully!" << endl;
    }

    // Search book by title
    Book* searchBook(string title) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i]->getTitle() == title) {
                return books[i];
            }
        }
        return NULL;
    }

    // Display book stock
    void checkStock() {
        string title;
        cout << "\n--- Check Stock ---" << endl;
        cout << "Enter book title to check stock: ";
        cin.ignore();
        getline(cin, title);

        Book* book = searchBook(title);
        if (book != NULL) {
            cout << "\nBook Found!" << endl;
            book->displayDetails();
        } else {
            cout << "Book not found in inventory!" << endl;
        }
    }

    // Sell book
    void sellBook() {
        string title;
        int quantity;

        cout << "\n--- Sell Book ---" << endl;
        cout << "Enter book title: ";
        cin.ignore();
        getline(cin, title);

        Book* book = searchBook(title);
        if (book != NULL) {
            cout << "\nBook Found!" << endl;
            book->displayDetails();

            cout << "\nEnter quantity to sell: ";
            cin >> quantity;

            if (quantity <= book->getStock()) {
                double totalCost = book->getPrice() * quantity;
                book->setStock(book->getStock() - quantity);

                cout << "\nSale Successful!" << endl;
                cout << "Quantity sold: " << quantity << endl;
                cout << "Total amount: $" << totalCost << endl;
                cout << "Remaining stock: " << book->getStock() << endl;
            } else {
                cout << "Not enough stock! Available: " << book->getStock() << endl;
            }
        } else {
            cout << "Book not found in inventory!" << endl;
        }
    }

    // Display all books
    void displayAllBooks() {
        cout << "\n--- All Books in Inventory ---" << endl;
        if (bookCount == 0) {
            cout << "No books in inventory!" << endl;
            return;
        }

        for (int i = 0; i < bookCount; i++) {
            cout << "\n" << (i + 1) << ". ";
            books[i]->displayDetails();
            cout << "--------------------" << endl;
        }
    }
};

int main() {
    BookShop shop;
    int choice;

    cout << "=== BOOKSHOP MANAGEMENT SYSTEM ===" << endl;

    while (true) {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Check Stock" << endl;
        cout << "3. Sell Book" << endl;
        cout << "4. Display All Books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                shop.addBook();
                break;
            case 2:
                shop.checkStock();
                break;
            case 3:
                shop.sellBook();
                break;
            case 4:
                shop.displayAllBooks();
                break;
            case 5:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
