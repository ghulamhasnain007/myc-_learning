/*
#include <iostream>
using namespace std;

struct rectangle {
    int length;
    int width;
};
int main() {
    rectangle rect;
    cout << "Enter the length of the rectangle: ";
    cin >> rect.length;
    cout << "Enter the width of the rectangle: ";
    cin >> rect.width;
    int area = rect.length * rect.width;
    int perimeter = 2 * (rect.length + rect.width);

    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    char name[20];
    int employeeID;
    double salary;
};
int main() {
    Employee employees[5];
    for (int i = 0; i < 5; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(employees[i].name, 20);
        cout << "Enter employee ID: ";
        cin >> employees[i].employeeID;
        cout << "Enter salary: ";
        cin >> employees[i].salary;
    }
    system("CLS");
    double highest = employees[0].salary;
    int m = 0;
    for (int i = 1; i < 5; i++) {
        if (employees[i].salary > highest) {
            highest = employees[i].salary;
            m = i;
        }
    }
    cout << "\nEmployee with highest salary:\n";
    cout << "Name: " << employees[m].name << endl;
    cout << "Employee ID: " << employees[m].employeeID << endl;
    cout << "Salary: " << employees[m].salary << endl;
    return 0;
}*/
#include <iostream>
#include <string>
using namespace std;
struct Book {
    char title[20];
    char author[20];
    int publicationYear;
};
int main() {
    Book books[5];
    cout << "Enter details for 5 books:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        cout << "Enter author name: ";
        cin.getline(books[i].author, 20);
        cout << "Enter title name: ";
        cin.getline(books[i].title, 20);
        cout << "Enter publication year: ";
        cin >> books[i].publicationYear;
        cin.ignore(); // Ignore the newline character in the input buffer
    }
    cout << "\nBooks you entered:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Book " << i + 1 << ":\n";
        cout << "Author: " << books[i].author << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Publication Year: " << books[i].publicationYear << endl;
        cout << "----------------------\n";
    }
    return 0;
}
