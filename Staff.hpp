//
//  Staff.hpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#pragma once
#include "Employee.hpp"
#include <string>

class Staff :
public Employee
{
public:
    Staff();
    Staff(string name, int id, string working, double salary, string department);
    ~Staff();
    double getSalary();
    void setSalary(double salary);
    string getDivision();
    void setDivision(string department);
    double getPay();
    string toString();
private:
    double weeklySalary;
    string division;
};
