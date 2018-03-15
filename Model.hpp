//
//  Model.hpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#pragma once
#include "Employee.hpp"
#include "StudentEmployee.hpp"
#include "Staff.hpp"
#include "Faculty.hpp"
#include <string>

class Model
{
public:
    Model();
    ~Model();
    void read();
    void readStaff();
    void addEmployee();
    void saveEmployee();
    void deleteEmployee();
    void display();
    
private:
    static int const MAX_SIZE = 10;
    StudentEmployee student[MAX_SIZE];
    Staff staff[MAX_SIZE];
    Faculty faculty[MAX_SIZE];
    
    string name;
    int id;
    string working;
    
    double hourWorked;
    string isTA;
    double payRate;
    
    double weeklySalary;
    string division;
    
    double annualSalary;
    int weekPerYear;
    string department;
    
    int counter1;
    int counter2;
    int counter3;
};
