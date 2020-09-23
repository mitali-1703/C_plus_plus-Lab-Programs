/* 
 Define a class book having following attributes
 Data members:
 Int book_ id
 String book_title
 Int book_cost
 String book_author_name
Member function:
 Void input_data(); //for input book details
 Void print(); // To display book details
 read details of n books from user and print them
 */

#include<iostream>
using namespace std;

class book{
    int book_id;
    string book_title;
    int book_cost;
    string book_author_name;
    public:
    void input_data();
    void print();
};
void book::input_data(){
    cout << "Enter the Id no. of the Book " << endl;
    cin >> book_id;
    cout << "Enter the cost of  the Book " << endl;
    cin >> book_cost;
    cout << "Enter the Title of  the Book " << endl;
    cin >> book_title;
    cout << "Enter the Author Name of  the Book " << endl;
    cin >> book_author_name;
}
void book::print(){
    cout << endl;
    cout << "Details of Book are:" << endl;
    cout << "The Id of Book is " << book_id << endl;
    cout << "The Cost of Book is Rs. " << book_cost << endl;
    cout << "The Title of Book is " << book_title << endl;
    cout << "The Author Name of Book is " << book_author_name << endl;
}
int main(){
    int n;
    cout << "Enter the Total number of Books" << endl;
    cin >> n;
    cout << endl;
    book B[n];

    for (int i = 0; i < n; i++)
        B[i].input_data();

    for (int i = 0; i < n; i++)
        B[i].print();
    return 0;
}

// OUTPUT
// Enter the Total number of Books
// 3

// Enter the Id no. of the Book
// 100
// Enter the cost of  the Book
// 638
// Enter the Title of  the Book
// Programming
// Enter the Author Name of  the Book
// Mitali
// Enter the Id no. of the Book
// 200
// Enter the cost of  the Book
// 873
// Enter the Title of  the Book
// Breath
// Enter the Author Name of  the Book
// Durjoy
// Enter the Id no. of the Book
// 300
// Enter the cost of  the Book
// 930
// Enter the Title of  the Book
// Oswald
// Enter the Author Name of  the Book
// Henry

// Details of Book are:
// The Id of Book is 100
// The Cost of Book is Rs. 638
// The Title of Book is Programming
// The Author Name of Book is Mitali

// Details of Book are:
// The Id of Book is 200
// The Cost of Book is Rs. 873
// The Title of Book is Breath
// The Author Name of Book is Durjoy

// Details of Book are:
// The Id of Book is 300
// The Cost of Book is Rs. 930
// The Title of Book is Oswald
// The Author Name of Book is Henry