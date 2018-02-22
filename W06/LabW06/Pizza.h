#ifndef PIZZA_H
#define PIZZA_H
// fill in more include here...
using namespace std;
class Pizza{
  private:
    int size;
    int base_price;
    string sauce;
    vector<Topping> toppings;
 
  public:
    Pizza();
    Pizza(int size, int base_price, string sauce);
    Pizza(const Pizza &other);
    ~Pizza();
    
    void operator=(const Pizza &other);
    
    int getSize();
    int getBasePrice();
    string getSauce();
    void setSize(int size);
    void setBasePrice(int base_price);
    void setSauce(string sauce);
    
    void addTopping(Topping topping);
    string getString();
    string getReciept();
};
#endif