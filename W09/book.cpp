// Name: Yilin Liu-Leitke
// Date: 3/19/18
// Desc: Demo for static, friend, and conversion

#include<iostream>

using namespace std;

class Book{
  private:
    string title;
    string author;
    int pages;
    static int num_books;
    
  public:
    // constructor
    Book(string t, string a, int p){
        title = t;
        author = a;
        pages = p;
        num_books++;
    }
    
    // skipping the setters/getters for brevity
    
    string getInfo(){
        return title + " by " + author;
    }
    
    static int getNumBooks(){
        return num_books;
    }
    
    friend string getStuff(Book b);
    
    operator int(){
        return pages;
    }
    
};

int Book::num_books = 0;

string getStuff(Book b){ 
    return b.title;
}

int main(){
    cout << Book::getNumBooks() << endl;
    Book a("Harry Potter", "JK Rowling", 400);
    Book b("The Lord of the Rings", "JRR Tolkien", 200);
    
    cout << a.getInfo() << endl;
    cout << b.getInfo() << endl;
    
    cout << Book::getNumBooks() << endl;
    cout << a.getNumBooks() << endl;
    cout << b.getNumBooks() << endl;
    Book c("Harry Potter II", "JK Rowling", 500);
    cout << c.getNumBooks() << endl;
    cout << getStuff(a) << endl;
    
    int i = 5;
    double j = 8.7;
    cout << i + (int)a << endl;
}