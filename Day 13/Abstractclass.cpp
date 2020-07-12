/*
Task
Given a Book class and a Solution class, write a MyBook class that does the following:

Inherits from Book
Has a parameterized constructor taking these  parameters:
string title
string author
int price
Implements the Book class' abstract display() method so it prints these 3 lines:
Title:, a space, and then the current instance's title.
Author:, a space, and then the current instance's author.
Price, a space, and then the current instance's price.
Note: Because these classes are being written in the same file, you must not use an access modifier (e.g.:public ) when declaring MyBook or your code will not execute.

Input Format
You are not responsible for reading any input from stdin. The Solution class creates a Book object and calls the MyBook class constructor (passing it the necessary arguments). It then calls the display method on the Book object.

Output Format
The void display() method should print and label the respective title, author, and price of the MyBook object's instance (with each value on its own line) like so:


Title: $title
Author: $author
Price: $price
Note: The $ is prepended to variable names to indicate they are placeholders for variables.

Sample Input
The following input from stdin is handled by the locked stub code in your editor:
The Alchemist
Paulo Coelho
248


Sample Output
The following output is printed by your display() method
Title: The Alchemist
Author: Paulo Coelho
Price: 248

*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};
class MyBook : Book{
    private :
        int price;
    public :
        MyBook(string title_ , string author_ , int price_) : Book(title_,author_) , price(price_){}

    virtual void display(){
        cout<<"Title: "<<Book::title<<"\n";
        cout<<"Author: "<<Book::author<<"\n";
        cout<<"Price: "<<price<<"\n";
    }
};

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
