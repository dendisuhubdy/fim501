//
//  people.h
//  Hello World
//
//  Created by Dendi Suhubdy on 8/25/14.
//  Copyright (c) 2014 NCSU. All rights reserved.
//

#ifndef Hello_World_people_h
#define Hello_World_people_h

using namespace std;

class people
{
    char name[30];
    int age;
    
public:
    void getdata(void);
    void display(void);
};

void people::getdata(void)
{
    cout << "Enter name: ";
    cin  >> name;
    cout << "Enter age: ";
    cin  >> age;
}

void people::display()
{
    cout << "\nName: " << name;
    cout << "\nAge:  " << age << "\n";
}

#endif
