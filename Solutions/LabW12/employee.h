/*  Name: Zach Spicklemire
    Date: 2018-04-05
    Description: Inteface and implementaton of employee and child classes
*/
#include <string>
#include <stdexcept>
#include <sstream>
#include <vector>

class Employee{
    private:
    std::string name;
    std::string depratment;
    int salary;
    int age;
    Employee* manager;
    
    public:
    Employee(){
        name = "";
        depratment = "";
        salary = 0;
        age = 0;
        manager = NULL;
    }
    
    std::string getName(){
        return name;
    }
    
    std::string getDepartment(){
        return depratment;
    }
    
    int getSalary(){
        return salary;
    }
    
    int getAge(){
        return age;
    }
    
    Employee* getManager(){
        return manager;
    }
    
    void setName(std::string name){
        this->name = name;
    }
    
    void setDepartment(std::string depratment){
        this->depratment = depratment;
    }
    
    void setSalary(int salary){
        if (salary < 1){
            throw std::exception();
        }
        this->salary = salary;
    }
    
    void setAge(int age){
        if (age < 18){
            throw std::exception();
        }
        this->age = age;
    }
    
    void setManager(Employee* manager){
        this->manager = manager;
    }
    
    virtual int getTotalCompensation(){
        return salary;
    }
    
    virtual std::string toString(){
        std::stringstream ss;
        ss << "Employee, Name: " << name << ", Age: " << age << ", Department: " << depratment;
        return ss.str();
    }
};

class Manager : public Employee {
    private:
    std::vector<Employee*> reports;
    int bonus;
    
    public:
    std::vector<Employee*> getReports(){
        return reports;
    }
    
    void addReport(Employee* e){
        e->setManager(this);
        reports.push_back(e);
    }
    
    void setBonus(int bonus){
        this->bonus = bonus;
    }
    
    int getBonus(){
        return bonus;
    }
    
    int getTotalCompensation(){
        return bonus + this->getSalary();
    }
    
    std::string toString(){
        std::stringstream ss;
        ss << "Manager, Name: " << this->getName() << ", Age: " << this->getAge();
        ss << ", Department: " << this->getDepartment() << ", NumReports: " << reports.size();
        return ss.str();
    }
};