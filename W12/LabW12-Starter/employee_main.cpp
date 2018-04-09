/*  Name: <fill me in>
    Date: <fill me in>
    Description: main class for employee program
*/
#include <iostream>
#include <vector>
#include <string>
#include "employee.h"

Employee* findEmployeeByName(std::string name, std::vector<Employee*> employees){
    for (unsigned int i = 0; i < employees.size(); i++){ // for each item in employees
        // This is how you do a string comparison, it returns 0 if they match
        if (name.compare(employees[i]->getName()) == 0){
            return employees[i];
        }
    }
    return NULL;
}

int main(){
    
}