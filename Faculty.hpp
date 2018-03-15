//
//  Faculty.hpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#pragma once
#include "Employee.hpp"
class Faculty :
public Employee
{
public:
    Faculty();
    Faculty(string name, int id, string working, double salary, int weeks, string section);
    ~Faculty();
    double getAnuualSalary();
    void setAnnualSalary(double salary);
    int getWeeks();
    void setWeeks(int weeks);
    string getDepartment();
    void setDepartment(string section);
    double getPay();
    string toString();
private:
    double annualSalary;
    int weekPerYear;
    string department;
};
