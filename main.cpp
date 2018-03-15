//
//  main.cpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#include <iostream>
#include "Employee.hpp"
#include "Controller.hpp"
#include "View.hpp"

using namespace std;

int main()
{
    Controller controller;
    View view;
    
    Model model;
    
    controller.UCRead();
    view.menu();
    
    int enter;
    cin >> enter;
    
    while (enter != 0)
    {
        switch (enter)
        {
            case 1:
                controller.UCAdd();
                cout << endl;
                break;
            case 2:
                controller.UCDelete();
                cout << endl;
                break;
            case 3:
                controller.UCSave();
                cout << endl;
                break;
            case 4:
                controller.UCDisplay();
                cout << endl;
                break;
                
            default:
                cout << "Invalid" << endl;
        }
        view.menu();
        cin >> enter;
    }
    system("pause");
}