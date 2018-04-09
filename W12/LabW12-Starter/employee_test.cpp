/*  Name: Zach Spicklemire
    Date: 2018-04-05
    Description: Unit tests for employee program
*/
#include "gtest/gtest.h"

#include "employee.h"

TEST(employee, exists){
    Employee *e = new Employee();
    EXPECT_EQ(e==NULL, false); // after being assigned, e is not NULL
    EXPECT_EQ(e->getName(), "");
}

TEST(employee, getSetName){
    Employee *e = new Employee();
    e->setName("John");
    EXPECT_EQ(e->getName(), "John");
}

TEST(employee, getSetDepartment){
    Employee *e = new Employee();
    e->setDepartment("Engineering");
    EXPECT_EQ(e->getDepartment(), "Engineering");
}

TEST(employee, getSetSalary){
    Employee *e = new Employee();
    e->setSalary(10000);
    EXPECT_EQ(e->getSalary(), 10000);
}

TEST(employee, setSalaryLessThanZero){
    Employee *e = new Employee();
    ASSERT_ANY_THROW(e->setSalary(-1));
}

TEST(employee, getSetAge){
    Employee *e = new Employee();
    e->setAge(22);
    EXPECT_EQ(e->getAge(), 22);
}

TEST(employee, underAge){
    Employee *e = new Employee();
    ASSERT_ANY_THROW(e->setAge(15));
}

TEST(employee, getTotalComp){
    Employee *e = new Employee();
    e->setSalary(10000);
    EXPECT_EQ(e->getTotalCompensation(), 10000);
}

TEST(employee, toString){
    Employee *e = new Employee();
    e->setName("Bob");
    e->setAge(22);
    e->setDepartment("Admin");
    EXPECT_EQ(e->toString(), "Employee, Name: Bob, Age: 22, Department: Admin");
}

TEST(manager, getReports){
    Manager *m = new Manager();
    std::vector<Employee*> employees = m->getReports();
    EXPECT_EQ(employees.size(), 0);
}

TEST(manager, addReport){
    Manager *m = new Manager();
    Employee *e = new Employee();
    m->addReport(e);
    std::vector<Employee*> reports = m->getReports();
    EXPECT_EQ(reports.size(), 1);
    EXPECT_EQ(reports[0], e);
    EXPECT_EQ(e->getManager(), m);
}

TEST(manager, getSetBonus){
    Manager *m = new Manager();
    m->setBonus(10000);
    EXPECT_EQ(m->getBonus(), 10000);
}

TEST(manager, getTotalCompensation){
    Manager *m = new Manager();
    m->setSalary(10000);
    m->setBonus(1000);
    EXPECT_EQ(m->getTotalCompensation(), 11000);
}

TEST(manager, toString){
    Manager *m = new Manager();
    m->setName("Bob");
    m->setAge(25);
    m->setDepartment("Admin");
    Employee *e1, *e2, *e3;
    e1 = new Employee();
    e2 = new Employee();
    e3 = new Employee();
    m->addReport(e1);
    m->addReport(e2);
    m->addReport(e3);
    EXPECT_EQ(m->toString(),
        "Manager, Name: Bob, Age: 25, Department: Admin, NumReports: 3"
    );
}