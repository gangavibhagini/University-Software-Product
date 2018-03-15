//
//  Staff.cpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#include "Staff.hpp"



Staff::Staff() : Employee(), weeklySalary(0.0), division("")
{
}

Staff::Staff(string name, int id, string working, double salary, string department) : Employee(name, id, working)
{
    weeklySalary = salary;
    division = department;
}


Staff::~Staff()
{
}

double Staff::getSalary()
{
    return weeklySalary;
}

void Staff::setSalary(double salary)
{
    weeklySalary = salary;
}

string Staff::getDivision()
{
    return division;
}

void Staff::setDivision(string department)
{
    division = department;
}

double Staff::getPay()
{
    return 2 * weeklySalary;
}

string Staff::toString()
{
    return (Employee::toString());
}
