//
//  Faculty.cpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#include "Faculty.hpp"


Faculty::Faculty() : Employee(), annualSalary(0.0), weekPerYear(0), department("")
{
}

Faculty::Faculty(string name, int id, string working, double salary, int weeks, string section) : Employee(name, id, working)
{
    annualSalary = salary;
    weekPerYear = weeks;
    department = section;
}

Faculty::~Faculty()
{
}

double Faculty::getAnuualSalary()
{
    return annualSalary;
}

void Faculty::setAnnualSalary(double salary)
{
    annualSalary = salary;
}

int Faculty::getWeeks()
{
    return weekPerYear;
}

void Faculty::setWeeks(int weeks)
{
    weekPerYear = weeks;
}

string Faculty::getDepartment()
{
    return department;
}

void Faculty::setDepartment(string section)
{
    department = section;
}

double Faculty::getPay()
{
    return (annualSalary/weekPerYear)*2;
}

string Faculty::toString()
{
    return (Employee::toString());
}