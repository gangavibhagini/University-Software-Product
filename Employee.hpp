//
//  Employee.hpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    Employee();
    Employee(string name, int id, string status);
    ~Employee();
    int getID();
    void setID(int newID);
    string getName();
    void setName(string newName);
    string getIsWorking();
    void setIsWorking(string working);
    virtual double getPay() = 0;
    string toString();
private:
    int employeeID;
    string employeeName;
    bool isWorking;
    string test;
};
