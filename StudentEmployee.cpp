//
//  StudentEmployee.cpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#include "StudentEmployee.hpp"



using namespace std;

StudentEmployee::StudentEmployee() : Employee(), hourWorked(0), isTA(false), payRate(0)
{
}

StudentEmployee::StudentEmployee(string name, int id, string working, double hours, string ta, double rate) : Employee(name, id, working)
{
    hourWorked = hours;
    if (ta == "TRUE" || ta == "true")
    {
        isTA = true;
    }
    else
    {
        isTA = false;
    }
    payRate = rate;
}


StudentEmployee::~StudentEmployee()
{
}

double StudentEmployee::getHours()
{
    return hourWorked;
}

void StudentEmployee::setHours(double hours)
{
    hourWorked = hours;
}

string StudentEmployee::getTA()
{
    return test;
}

void StudentEmployee::setTA(string ta)
{
    test = ta;
}

double StudentEmployee::getRate()
{
    return payRate;
}

void StudentEmployee::setRate(double rate)
{
    payRate = rate;
}

double StudentEmployee::getPay()
{
    return payRate * hourWorked;
}

string StudentEmployee::toString()
{
    return (Employee::toString());
}


