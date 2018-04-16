#include <string>
#include <stdexcept>
#include <sstream>
#include <vector>

using namespace std;

class Employee{
  private:
    string name;
    string department;
    int salary;
    int age;
    Employee* manager;

    public:
    string getName(){
        return name;
    }
    void setName(string name){
        this->name = name;
    }
    
    string getDepartment(){
        return department;
    }
    void setDepartment(string department){
        this->department = department;
    }
    
    int getSalary(){
        return salary;
    }
    void setSalary(int salary){
        this->salary = salary;
    }
    
    int getAge(){
        return age;
    }
    void setAge(int age){
        this->age = age;
    }
    
    Employee* getManager(){
        return manager;
    }
    
    void setManager(Employee* manager){
        this->manager = manager;
    }
    
    virtual int getTotalCompensation(){ //only salary :(
        return salary;
    }
    
    virtual string toString(){
        stringstream ss;
        ss << "Employee, Name: " << name << ", Age: " << age << ", Department: " << department;
        return ss.str();
    }
};

class Manager : public Employee {
  private:
    int bonus;
    vector<Employee*> reports;

  public:
    int getBonus(){
        return bonus;
    }
    void setBonus(int bonus){
        this->bonus = bonus;
    }
    
    void addReport(Employee* e){
        reports.push_back(e);
        e->setManager(this);
    }
    int getTotalCompensation(){ // salary + bonus :)
        return salary + bonus;
    }
    
    string toString(){
        stringstream ss;
        ss << "Manger, Name: " << name << ", Age: " << age << ", Department: " << department;
        ss << ", NumReports: " << reports.size(); 
        return ss.str();
    }

};