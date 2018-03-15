//
//  View.cpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#include "View.hpp"

#include <iostream>

using namespace std;

View::View()
{
}


View::~View()
{
}

void View::menu()
{
    cout << ("Enter 1 to add the employees.") << endl;
    cout << ("Enter 2 to delete the employees.") << endl;
    cout << ("Enter 3 to save the employees.") << endl;
    cout << ("Enter 4 to display the employees.") << endl;
    cout << ("Enter 0 to exit") << endl;
    cout << "ENTER: ";
}