//
//  StudentEmployee.hpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#pragma once
#include "Employee.hpp"
class StudentEmployee :
public Employee
{
public:
    StudentEmployee();
    StudentEmployee(string name, int id, string working, double hours, string ta, double rate);
    ~StudentEmployee();
    double getHours();
    void setHours(double hours);
    string getTA();
    void setTA(string ta);
    double getRate();
    void setRate(double rate);
    double getPay();
    string toString();
private:
    double hourWorked;
    bool isTA;
    double payRate;
    string test;
};
