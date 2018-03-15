//
//  Controller.cpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#include "Controller.hpp"


Controller::Controller()
{
}


Controller::~Controller()
{
}

void Controller::UCRead()
{
    model.read();
}

void Controller::UCAdd()
{
    model.addEmployee();
}

void Controller::UCDelete()
{
    model.deleteEmployee();
}

void Controller::UCSave()
{
    model.saveEmployee();
}

void Controller::UCDisplay()
{
    model.display();
}