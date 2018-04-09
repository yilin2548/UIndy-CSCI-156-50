#include "gtest/gtest.h"

#include "employee.h"

TEST(employee, getSetName){
    Employee *e = new Employee();
    e->setName("John");
    EXPECT_EQ(e->getName(), "John");
}
