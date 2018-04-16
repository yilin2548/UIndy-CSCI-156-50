#ifndef VEHICLE_H
#define VEHICLE_H  

/*    @file vehicle.cpp   
      @author Yilin Liu-Leitke
      @date 4/15/2018

			@description Implements 5 classes for vehicle information
*/

#include <string>
#include <sstream>
using namespace std;

const int CURRENT_YEAR = 2018;  // Use this variable whever you are doing
                                // your price/year calculations.
class Vehicle {
  protected:
    string color;
    int passengers;
    int wheels;
    int year;
  public:
    Vehicle(){
        color = "";
        passengers = 1;
        wheels = 2;
        year = CURRENT_YEAR;
    }
    
    void setColor(string color){
        this->color = color;
    }
    
    string getColor(){
        return color;
    }
    
    void setPassengers(int passengers){
        this->passengers = passengers;
    }
    
    int getPassengers(){
        return passengers;
    }
    
    void setWheels(int wheels){
        this->wheels = wheels;
    }
    
    int getWheels(){
        return wheels;
    }
    
    void setYear(int year){
        if (year <= CURRENT_YEAR){
            this->year = year;
        } else {
            this->year = CURRENT_YEAR;
        }
    }
    
    int getYear(){
        return year;
    }
    
    virtual float getPrice() = 0;

    virtual string print(){
        stringstream ss;
        ss << "Color: " << color << endl;
        ss << "Year built: " << year << endl;
        ss << "# of Passengers: " << passengers << endl;
        return ss.str();
    }
};

class Bike : public Vehicle {
  public:
    Bike(){
        passengers = 1;
        wheels = 2;
    }
    
    void setPassengers(int passengers){
        if (passengers != 1) {
            cout << "Bike can only hold 1 passenger" << endl;
        }
        this->passengers = 1;
    }
    
    void setWheels(int wheels){
        if (wheels != 2){
            cout << "Bike can only have 2 wheels" << endl;
        }
        this->wheels = 2;
    }
    
    float getPrice(){
        float price;
        price = 1000 - 100 * (CURRENT_YEAR - year);
        if (price < 0){
            return 0;
        } else {
            return price;
        }
    }
    
    string print(){
        stringstream ss;
        ss << "Bike: " << endl;
        ss << Vehicle::print();
        ss << "# of Wheels: " << wheels << endl;
        ss << "Price: " << "$" << getPrice() << endl;
        return ss.str();
    }
};

class Car : public Vehicle {
  private:
    bool air;
    bool DVD;
    
  public:
    Car(){
        wheels = 4;
        air = false;
        DVD = false;
    }
    
    void setPassengers(int passengers){
        if (passengers >= 1 && passengers <= 10){
            this->passengers = passengers;
        } else {
            cout << "Car can only hold 1 to 4 passengers" << endl;
        }
    }
    
    void setWheels(int wheels){
        if (wheels != 4){
            cout << "Car can only have 4 wheels" << endl;
        }
        this->wheels = 4;
    }
    
    void setAir(bool air){
        this->air = air;
    }
    
    bool getAir(){
        return air;
    }
    
    void setDVD(bool DVD){
        this->DVD = DVD;
    }
    
    bool getDVD(){
        return DVD;
    }
    
    float getPrice(){
        float price;
        price = 5000 * passengers - 500 * (CURRENT_YEAR - year);
        if (price < 100) {
            price = 100;
        }
        price += 200 * air + 100 * DVD;
        return price;
    }
    
    string print(){
        stringstream ss;
        ss << "Car: " << endl;
        ss << Vehicle::print();
        ss << "# of Wheels: " << wheels << endl;
        ss << "Has Air-conditioning: " << (air ? "True" : "False") << endl;
        ss << "Has DVD: " << (DVD ? "True" : "False") << endl; 
        ss << "Price: " << "$" << getPrice() << endl;
        return ss.str();
    }
};

class Truck : public Vehicle {
  private:
    int cap;

  public:
    Truck(){
        wheels = 4;
        cap = 0;
    }
    void setPassengers(int passengers){
        if (passengers >= 1 && passengers <= 4){
            this->passengers = passengers;
        } else {
            cout << "Truck can only hold 1 to 4 passengers" << endl;
        }
    }
    
    void setWheels(int wheels){
        if (wheels >= 4 && wheels <= 16){
            this->wheels = wheels;
        } else {
            cout << "Truck can only have 4 to 16 wheels" << endl;
        }
    } 
    
    void setCap(int cap){
        if (cap >=0 && cap <= 20000){
            this->cap = cap;
        } else {
            cout << "Truck can only carry no more than 20000lb" << endl;
        }
    }
    
    int getCap(){
        return cap;
    }
    
    float getPrice(){
        float price = 10000;
        price += 1000 * passengers - 500 * (CURRENT_YEAR - year);
        if (price < 200) {
            price = 200;
        }
        price += 1.25 * cap + 200 * wheels;
        return price;
    }
    
    string print(){
        stringstream ss;
        ss << "Truck: " << endl;
        ss << Vehicle::print();
        ss << "# of Wheels: " << wheels << endl;
        ss << "Capacity: " << cap << "lb" << endl; 
        ss << "Price: " << "$" << getPrice() << endl;
        return ss.str();
    }
};

class Airplane : public Vehicle {
  private:
    int cap;
    int props;
    
  public:
    Airplane(){
        wheels = 0;
        cap = 0;
        props = 1;
    }
    
    void setPassengers(int passengers){
        if (passengers >= 1 && passengers <= 40){
            this->passengers = passengers;
        } else {
            cout << "Airplane can only hold 1 to 40 passengers" << endl;
        }
    }
    
    void setWheels(int wheels){
        cout << "Airplane does not have wheels" << endl;
        this->wheels = 0;
    } 
    
    void setCap(int cap){
        if (cap >=0 && cap <= 20000){
            this->cap = cap;
        } else {
            cout << "Airplane can only carry no more than 20000lb" << endl;
        }
    }
    
    int getCap(){
        return cap;
    }
    
    void setProps(int props){
        if (props >= 1) {
            this->props = props;
        } else {
            cout << "Airplan must have at least 1 props" << endl;
        }
    }
    
    int getProps(){
        return props;
    }
    
    float getPrice(){
        float price = 15000;
        price += 1000 * passengers - 500 * (CURRENT_YEAR - year);
        if (price < 1000) {
            price = 1000;
        }
        price += 5.25 * cap + 100 * props;
        return price;
    }
    
    string print(){
        stringstream ss;
        ss << "Airplane: " << endl;
        ss << Vehicle::print();
        ss << "# of Props: " << props << endl;
        ss << "Capacity: " << cap << "lb" << endl; 
        ss << "Price: " << "$" << getPrice() << endl;
        return ss.str();
    }
};


#endif
