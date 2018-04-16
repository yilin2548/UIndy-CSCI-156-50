/*  Name: <fill me in>
    Date: <fill me in>
    Description: main class for employee program
*/
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "employee.h"

using namespace std;

Employee* findEmployeeByName(std::string name, std::vector<Employee*> employees){
    for (unsigned int i = 0; i < employees.size(); i++){ // for each item in employees
        // This is how you do a string comparison, it returns 0 if they match
        if (name.compare(employees[i]->getName()) == 0){
            return employees[i];
        }
    }
    return NULL;
}

int getChoice(){
    string input;
    cout << "Enter choice" << endl;
    cout << "1. Create new Employee, 2. Create new Manager ...."<< endl;
    cin >> input;
    return atoi(input.c_str());
}

Employee* getEmployee(){
    Employee* e = new Employee();
    string input;
    cout << "Employee Name: ";
    cin >> input;
    e->setName(input);
    cout << "Age: ";
    cin >> input;
    e->setAge(atoi(input.c_str()));
    cout << "Department: ";
    cin >> input;
    e->setDepartment(input);
    cout << "Salary: ";
    cin >> input;
    e->setSalary(atoi(input.c_str()));
    cout << e->toString() << endl;  //debug line
    return e;
}

Employee* getManager(vector<Employee*> employees){
    Manager* m = new Manager();
    string input;
    cout << "Manager Name: ";
    cin >> input;
    m->setName(input);
    cout << "Age: ";
    cin >> input;
    m->setAge(atoi(input.c_str()));
    cout << "Department: ";
    cin >> input;
    m->setDepartment(input);
    cout << "Salary: ";
    cin >> input;
    m->setSalary(atoi(input.c_str()));
    cout << "Bonus: ";
    cin >> input;
    m->setBonus(atoi(input.c_str()));
    
    // show all available employees
    // enter a name 
    // add this name as the report
    // How to handle multiple input of same name?
    bool taken[employees.size()];
    for (unsigned int i = 0; i < employees.size(); i++){
        taken[i] = 0;
    }
    while(true){
        cout << "What report would you like to add, or -1 to finish" << endl;
        for (unsigned int i = 0; i < employees.size(); i++){
            if (taken[i] == 0) {
                cout << i << ": " << employees[i]->getName() << endl;
            }
        }
        cin >> input;
        if (input.compare("-1") == 0){
            break;
        }
        int choice = atoi(input.c_str());
        if(choice >= 0 && choice < (int)employees.size()){
            m->addReport(employees[choice]);
            taken[choice] = 1;
        } else {
            cout << "Invalid Choice" << endl;
        }
        
    }
    cout << m->toString() << endl;
    return m;
} 

void printAllEmployees(vector<Employee*> employees){
    // leave you to figure it out
}

void printInfoForName(vector<Employee*> employees){
    // option: print all the names here to remind user who is 
    // in the system
    string name;
    cout << "Enter the name that you want to print info for:" << endl;
    cin >> name;
    cout << findEmployeeByName(name, employees)->toString() << endl;
}

void printCompensationForName(vector<Employee*> employees){
    // leave you to figure it out
}

void printSumCompensation(vector<Employee*> employees){
    long sum = 0;
    for (unsigned int i = 0; i < employees.size() ; i++){
        sum += employees[i]->getTotalCompensation();
    }
    cout << sum << endl;
}

int main(){
    vector<Employee*> employees;
    int choice = getChoice();
    while(choice != 7){
        if (choice == 1){
            employees.push_back(getEmployee());
        } else if (choice == 2){
            employees.push_back(getManager(employees));
        } else if (choice == 3){
            printAllEmployees(employees);
        } else if (choice == 4){
            printInfoForName(employees);
        } else if (choice == 5){
            printCompensationForName(employees);
        } else if (choice == 6){
            printSumCompensation(employees);
        } else {
            cout << "Invalid Choice." << endl;
        }
        choice = getChoice();
    }
}