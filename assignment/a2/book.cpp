#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
class Book {
private:
    int bookId;
    string title;
    double price;

public:
    void setDetails(int id, const string& bookTitle, double bookPrice) {
        bookId = id;
        title = bookTitle;
        price = bookPrice;
    }

    void showDetails() const {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    string getDetails() const {
        return "Book ID: " + to_string(bookId) + "\nTitle: " + title + "\nPrice: " + to_string(price);
    }
};

int main() {
    int numBooks;

    cout << "Enter the number of books: ";
    cin >> numBooks;

    vector<Book> books;

    for (int i = 0; i < numBooks; ++i) {
        Book book;

        int id;
        string title;
        double price;

        cout << "Enter details for Book " << i + 1 << ":" << endl;
        cout << "Enter Book ID: ";
        cin >> id;

        cin.ignore(); // Ignore the newline character left in the buffer

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Price: ";
        cin >> price;

        book.setDetails(id, title, price);
        books.push_back(book);
    }

    // Store the details in a file
    ofstream file("book_details.txt");
    if (file.is_open()) {
        for (const auto& book : books) {
            file << book.getDetails() << "\n\n";
        }
        file.close();
        cout << "Book details written to file." << endl;
    } else {
        cout << "Unable to open the file." << endl;
    }

    // Read the details from the file
    ifstream readFile("book_details.txt");
    if (readFile.is_open()) {
        string line;
        while (getline(readFile, line)) {
            cout << line << endl;
        }
        readFile.close();
    } else {
        cout << "Unable to open the file." << endl;
    }

    return 0;
}
