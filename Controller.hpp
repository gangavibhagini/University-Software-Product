//
//  Controller.hpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#pragma once
#include "Model.hpp"
class Controller
{
public:
    Controller();
    ~Controller();
    void UCRead();
    void UCAdd();
    void UCDelete();
    void UCSave();
    void UCDisplay();
private:
    Model model;
};
