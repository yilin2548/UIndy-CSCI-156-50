#include "gtest/gtest.h"

#include "employee.h"

TEST(employee, getSetName){
    Employee *e = new Employee();
    e->setName("John");
    EXPECT_EQ(e->getName(), "John");
}

TEST(employee, getSetDepartment){
    Employee *e = new Employee();
    e->setDepartment("Admin");
    EXPECT_EQ(e->getDepartment(), "Admin");    
}

TEST(employee, getSetSalary){
    Employee *e = new Employee();
    e->setSalary(100000);
    EXPECT_EQ(e->getSalary(), 100000);    
}

TEST(employee, getSetAge){
    Employee *e = new Employee();
    e->setAge(30);
    EXPECT_EQ(e->getAge(), 30);    
}

TEST(employee, getSetManager){
    Employee *e = new Employee();
    Employee *m = new Employee();
    e->setManager(m);
    EXPECT_EQ(e->getManager(), m);
}

TEST(employee, getTotalCompensation){
    Employee *e = new Employee();
    e->setSalary(5000);
    EXPECT_EQ(e->getTotalCompensation(), 5000);
}

TEST(employee, toString){
    Employee *e = new Employee();
    e->setName("John");
    e->setAge(30);
    e->setSalary(5000);
    e->setDepartment("Admin");
    EXPECT_EQ(e->toString(), "Employee, Name: John, Age: 30, Department: Admin");
}

TEST(manager, getSetBonus){
    Manager *m = new Manager();
    m->setBonus(1000);
    EXPECT_EQ(m->getBonus(), 1000);
}

TEST(manager, addReport){
    Manager *m = new Manager();
    Employee *e = new Employee();
    m->addReport(e);
    EXPECT_EQ(e->getManager(), m);
}