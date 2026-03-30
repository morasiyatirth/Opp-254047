#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
public:
    int id;
    string name;

    void addBook() {
        cout << "Enter Book ID: "; cin >> id;
        cout << "Enter Book Name: "; cin.ignore(); getline(cin, name);
    }

    void showBook() {
        cout << "ID: " << id << " | Name: " << name << endl;
    }
};

int main() {
    vector<Book> library;
    int choice;

    while (true) {
        cout << "\n1. Add Book\n2. Show All Books\n3. Exit\nEnter Choice: ";
        cin >> choice;

        if (choice == 1) {
            Book b; b.addBook();
            library.push_back(b);
        } else if (choice == 2) {
            for (auto &b : library) b.showBook();
        } else {
            break;
        }
    }
    return 0;
}