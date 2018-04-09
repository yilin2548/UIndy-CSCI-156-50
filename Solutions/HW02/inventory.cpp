/*  Name: Zach Spicklemire
    Date: 2018-02-05
    Description: Solution to Homework 2
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

struct inventory_t{
    std::string name;
    int count;
    double price;
};

inventory_t getItem();
void printItem(const inventory_t &inv);
void printAllItems(std::vector<inventory_t> items);
void printItemsInPriceRange(std::vector<inventory_t> items);
void searchItems(std::vector<inventory_t> items);
void getStats(std::vector<inventory_t> items);
int getChoice();

int main(){
    std::vector<inventory_t> items;
    int choice = getChoice();
    std::cout << "Inventory Program" << std::endl;
    while(choice != 6){
        if (choice == 1){
            items.push_back(getItem());
        } else if (choice == 2){
            searchItems(items);
        } else if (choice == 3){
            printItemsInPriceRange(items);
        } else if (choice == 4){
            getStats(items);
        } else if (choice == 5){
            printAllItems(items);
        } else {
            std::cout << "Invalid Choice " << choice << std::endl;
        }
        choice = getChoice();
    }
}

int getChoice(){
    std::string input;
    std::cout << "Enter Choice" << std::endl;
    std::cout << "1: Enter Tool, 2: Query Tool Name, 3: Tools Within Price Range" << std::endl;
    std::cout << "4: Stats, 5: Print all tools, 6: Quit" << std::endl;
    std::cin >> input;
    return std::atoi(input.c_str());
}

inventory_t getItem(){
    inventory_t new_item;
    std::string input;
    std::cout << "Item Name: ";
    std::cin >> new_item.name;
    std::cout << "Item Count: ";
    std::cin >> input;
    new_item.count = std::atoi(input.c_str());
    std::cout << "Item Price: ";
    std::cin >> input;
    new_item.price = std::atof(input.c_str());
    return new_item;
}

void printItem(const inventory_t &inv){
    std::cout << "Inventory Item" << std::endl;
    std::cout << "Name: " << inv.name << std::endl;
    std::cout << "Count: " << inv.count << std::endl;
    std::cout << "Price: " << inv.price << std::endl;
    std::cout << std::endl;
}

void printAllItems(std::vector<inventory_t> items){
    for (unsigned int i = 0; i < items.size(); i++){
        printItem(items[i]);
    }
}

void printItemsInPriceRange(std::vector<inventory_t> items){
    double min, max;
    std::string input;
    std::cout << "Enter min price: ";
    std::cin >> input;
    min = std::atof(input.c_str());
    std::cout << "Enter max price: ";
    std::cin >> input;
    max = std::atof(input.c_str());
    for (unsigned int i = 0; i < items.size(); i++){
        if (items[i].price > min && items[i].price < max){
            printItem(items[i]);
        }
    }
}

void searchItems(std::vector<inventory_t> items){
    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name;
    for (unsigned int i = 0; i < items.size(); i++){
        // use the .compare function to compare 2 strings, if the result is 0,
        // the string are the same
        if (name.compare(items[i].name) == 0){
            printItem(items[i]);
        }
    }
}

void getStats(std::vector<inventory_t> items){
    double total_price;
    for (unsigned int i = 0; i < items.size(); i++){
        total_price += (items[i].price * items[i].count);
    }
    std::cout << "Total price is " << total_price << std::endl;
}