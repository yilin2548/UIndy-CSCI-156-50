// Name: Yilin Liu-Leitke
// Date: 3/19/18
// Desc: Demo for static, friend, and conversion

#include<iostream>
#include<stdexcept>

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
        if (t == ""){
            throw length_error("Title cannot be empty");
        }
        if (p <= 0){
            throw logic_error("Page cannot be negative or zero");
        }
        title = t;
        author = a;
        pages = p;
        num_books++;
    }
    // destructor
    ~Book(){
        num_books--;
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
    /*
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
    */
    Book *e = new Book("test title", "test author", 200);
    cout << Book::getNumBooks() << endl;
    
    delete e;
    e = NULL;
    cout << Book::getNumBooks() << endl;
    
    try{
        Book f("", "Bad author", -10);
    }catch(length_error &e){
        cout << "Length error happened: " << e.what() << endl;
    }catch(logic_error &e){
        cout << "Logic error happened: " << e.what() << endl;
    }catch(exception &e){
        cout << "Any other error happened: " << e.what() << endl;
    }
    
    cout << "Program finished" << endl;
    return 0;
}