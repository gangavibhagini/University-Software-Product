//
//  Employee.cpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#include "Employee.hpp"
#include <iostream>
#include <string>

using namespace std;


Employee::Employee()
{
    employeeName = " ";
    employeeID = 0;
    test = " ";
    isWorking = false;
}

Employee::Employee(string name, int id, string status)
{
    employeeName = name;
    employeeID = id;
    if (status == "TRUE")
    {
        isWorking = true;
    }
    else
    {
        isWorking = false;
    }
}

Employee::~Employee()
{
}

int Employee::getID()
{
    return employeeID;
}

void Employee::setID(int newID)
{
    employeeID = newID;
}

string Employee::getName()
{
    return employeeName;
}

void Employee::setName(string newName)
{
    employeeName = newName;
}

string Employee::getIsWorking()
{
    return test;
}

void Employee::setIsWorking(string working)
{
    test = working;
}

string Employee::toString()
{
    return employeeName;
}


