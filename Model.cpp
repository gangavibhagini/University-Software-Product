//
//  Model.cpp
//  Programming Assignmnt 4
//
//  Created by Shruthi Gangadharan on 11/30/15.
//  Copyright © 2015 Ganga Vibhagini. All rights reserved.
//

#include "Model.hpp"

#include "Model.hpp"
#include "StudentEmployee.hpp"

#include<iostream>
#include<fstream>
#include<string>
#include <iomanip>
#include <cstdlib>
using namespace std;

Model::Model()
{
    name = "";
    id = 0;
    working = "";
    hourWorked = 0.0;
    isTA = "";
    payRate = 0.0;
    counter1 = 0;
    counter2 = 0;
    weeklySalary = 0.0;
    division = "";
    counter3 = 0;
    annualSalary = 0.0;
    weekPerYear = 0;
    department = "";
}

Model::~Model()
{
}

void Model::read()
{
    string line = "";
    string n = "";
    ifstream file;
    ifstream fileStaff;
    ifstream fileFaculty;
    
    file.open("Programming Assignment 4 StudentEmployee Data.txt");
    if (!file.is_open())
    {
        cout << system("ls");
        exit(0);
    }
    
    while (!file.eof())
    {
        getline(file, line, ',');
        student[counter1].setName(line);
        
        getline(file, line, ',');
        student[counter1].setID(atoi(line.c_str()));
        
        getline(file, line, ',');
        student[counter1].setIsWorking(line);
        
        getline(file, line, ',');
        student[counter1].setHours(atof(line.c_str()));
        
        getline(file, line, ',');
        student[counter1].setTA(line);
        
        getline(file, line);
        student[counter1].setRate(atof(line.c_str()));
        counter1++;
    }
    file.close();
    
    fileStaff.open("Programming Assignment 4 Staff Data.txt");
    if (!fileStaff)
    {
        cout << "Staff\n";
        exit(0);
    }
    while (!fileStaff.eof())
    {
        getline(fileStaff, n, ',');
        staff[counter2].setName(n);
        
        getline(fileStaff, n, ',');
        staff[counter2].setID(atoi(n.c_str()));
        
        getline(fileStaff, n, ',');
        staff[counter2].setIsWorking(n);
        
        getline(fileStaff, n, ',');
        staff[counter2].setSalary(atof(n.c_str()));
        
        getline(fileStaff, n);
        staff[counter2].setDivision(n);
        counter2++;
    }
    fileStaff.close();
    
    fileFaculty.open("Programming Assignment 4 Faculty Data.txt");
    if (!fileFaculty)
    {
        cout << "Faculty\n";
        exit(0);
    }
    n = "";
    while (!fileFaculty.eof())
    {
        getline(fileFaculty, n, ',');
        faculty[counter3].setName(n);
        
        getline(fileFaculty, n, ',');
        faculty[counter3].setID(atoi(n.c_str()));
        
        getline(fileFaculty, n, ',');
        faculty[counter3].setIsWorking(n);
        
        getline(fileFaculty, n, ',');
        faculty[counter3].setAnnualSalary(atof(n.c_str()));
        
        getline(fileFaculty, n, ',');
        faculty[counter3].setWeeks(atoi(n.c_str()));
        
        getline(fileFaculty, n);
        faculty[counter3].setDepartment(n);
        counter3++;
    }
    fileFaculty.close();
}

void Model::addEmployee()

{
    int select = 0;
    cout << "1. Student Employee\n" << "2. Staff\n" << "3. Faculty" << endl;
    cout << "select: ";
    cin >> select;
    string name;
    switch (select)
    {
        case 1:
            if (counter1 > MAX_SIZE)
            {
                cout << "ERROR MAXIMUM LIMIT REACHED!!!";
                break;
            }
            cout << "Enter the name: ";
            cin.ignore();
            fflush(stdin);
            getline(cin, name);
            student[counter1].setName(name);
            
            cout << "Enter an ID #: ";
            cin >> id;
            student[counter1].setID(id);
            
            cout << "Enter isWorking (TRUE/FALSE): ";
            cin >> working;
            student[counter1].setIsWorking(working);
            
            cout << "Enter hours: ";
            cin >> hourWorked;
            student[counter1].setHours(hourWorked);
            
            cout << "Enter isTA (TRUE/FALSE): ";
            cin >> isTA;
            student[counter1].setTA(isTA);
            
            cout << "Enter rate: ";
            cin >> payRate;
            student[counter1].setRate(payRate);
            
            counter1++;
            cout << "Employee added" << endl;
            break;
        case 2:
            if (counter2 > MAX_SIZE)
            {
                cout << "ERROR!!! MAXIMUM LIMIT REACHED" << endl;
            }
            cout << "Enter the name: ";
            cin.ignore();
            fflush(stdin);
            getline(cin, name);
            staff[counter2].setName(name);
            
            cout << "Enter an ID #: ";
            cin >> id;
            staff[counter2].setID(id);
            
            cout << "Enter isWorking (TRUE/FALSE): ";
            cin >> working;
            staff[counter2].setIsWorking(working);
            
            cout << "Weekly Salary: ";
            cin >> weeklySalary;
            staff[counter2].setSalary(weeklySalary);
            
            cout << "Division: ";
            cin.ignore();
            getline(cin, division);
            counter2++;
            cout << "Employee added" << endl;
            break;
        case 3:
            if (counter3 > MAX_SIZE)
            {
                cout << "ERROR!!! MAXIMUM LIMIT REACHED" << endl;
            }
            cout << "Enter the name: ";
            cin.ignore();
            fflush(stdin);
            getline(cin, name);
            faculty[counter3].setName(name);
            
            cout << "Enter an ID #: ";
            cin >> id;
            faculty[counter3].setID(id);
            
            cout << "Enter isWorking (TRUE/FALSE): ";
            cin >> working;
            faculty[counter3].setIsWorking(working);
            
            cout << "Enter annual salary: ";
            cin >> annualSalary;
            faculty[counter3].setAnnualSalary(annualSalary);
            
            cout << "Number of weeks: ";
            cin >> weekPerYear;
            faculty[counter3].setWeeks(weekPerYear);
            
            cout << "DeparTment: ";
            cin >> department;
            faculty[counter3].setDepartment(department);
            counter3++;
            cout << "Employee added" << endl;
            break;
    }
}

void Model::saveEmployee()
{
    int choice = 0;
    ofstream file;
    cout << "1. Student Employee\n" << "2. Staff\n" << "3. Faculty" << endl;
    cin >> choice;
    switch (choice)
    {
        case 1:
            file.open("Programming Assignment 4 StudentEmployee Data.txt");
            if (file.fail())
            {
                exit(0);
            }
            
            for (int i = 0; i < counter1; i++)
            {
                file << student[i].getName() << ", " << student[i].getID() << ", " << student[i].getIsWorking() << ", " << student[i].getHours() << ", " << student[i].getTA() << ", " << student[i].getRate() << endl;
            }
            file.close();
            cout << "Employee saved" << endl;
            break;
        case 2:
            file.open("Programming Assignment 4 Staff Data.txt");
            if (file.fail())
            {
                exit(0);
            }
            
            for (int i = 0; i < counter2; i++)
            {
                file << staff[i].getName() << ", " << staff[i].getID() << ", " << staff[i].getIsWorking() << ", " << staff[i].getSalary() << ", " << staff[i].getDivision() << endl;
            }
            file.close();
            cout << "Employee saved" << endl;
            break;
        case 3:
            file.open("Programming Assignment 4 Faculty Data.txt");
            if (file.fail())
            {
                exit(0);
            }
            
            for (int i = 0; i < counter3; i++)
            {
                file << faculty[i].getName() << ", " << faculty[i].getID() << ", " << faculty[i].getIsWorking() << ", " << faculty[i].getAnuualSalary() << ", " << faculty[i].getWeeks() << ", " << faculty[i].getDepartment() << endl;
            }
            file.close();
            cout << "Employee saved" << endl;
            break;
    }
}

void Model::deleteEmployee()
{
    int choice = 0;
    cout << "1. Student\n2. Staff\n3. Faculty\nENTER: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            if (counter1 == 0)
            {
                cout << "ERROR!!!" << endl;
            }
            else
            {
                cout << "Enter id number to delete: ";
                cin >> id;
                
                for (int i = 0; i < counter1; i++)
                {
                    if (id == student[i].getID())
                    {
                        for (int j = i; i < (MAX_SIZE - 1); j++)
                        {
                            student[j] = student[j + 1];
                            
                            cout << student[j].getID() << endl;
                        }
                        cout << "Employee deleted\n";
                        counter1--;
                    }
                }
            }
            break;
        case 2:
            if (counter2 == 0)
            {
                cout << "ERROR!!!" << endl;
            }
            else
            {
                cout << "Enter id number to delete: ";
                cin >> id;
                for (int i = 0; i < counter2; i++)
                {
                    if (id == staff[i].getID())
                    {
                        for (int j = i; i < (MAX_SIZE - 1); j++)
                        {
                            staff[j] = staff[j + 1];
                        }
                        cout << "Employee deleted\n";
                        counter2--;
                    }
                }
            }
            break;
        case 3:
            if (counter3 == 0)
            {
                cout << "ERROR!!!" << endl;
            }
            else
            {
                cout << "Enter id number to delete: ";
                cin >> id;
                for (int i = 0; i < counter3; i++)
                {
                    if (id == faculty[i].getID())
                    {
                        for (int j = i; i < (MAX_SIZE - 1); j++)
                        {
                            faculty[j] = faculty[j + 1];
                        }
                        cout << "Employee deleted\n";
                        counter3--;
                    }
                }
            }
            break;
    }
}

void Model::display()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << endl << "\t\t       THE UNIVERSITY TWO-WEEK PAY PERIOD" << endl << endl;
    
    for (int i = 0; i < counter1; i++)
    {
        if (student[i].getPay() >= 1)
        {
            cout << "\t\t" << setw(18) << student[i].toString() << "\t SW" << setw(8) << "$ " << student[i].getPay() << endl;
        }
    }
    for (int i = 0; i < counter2; i++)
    {
        if (staff[i].getPay() >= 1)
        {
            cout << "\t\t" << setw(18) << staff[i].toString() << "\t ST" << setw(8) << "$ " << staff[i].getPay() << endl;
        }
    }
    for (int i = 0; i < counter3; i++)
    {
        if (staff[i].getPay() >= 1)
        {
            cout << "\t\t" << setw(18) << faculty[i].toString() << "\tFAC" << setw(8) << "$ " << faculty[i].getPay() << endl;
        }
    }
}



