//
//  converter.cpp
//  problem2p6
//
//  Created by Dendi Suhubdy on 8/25/14.
//  Copyright (c) 2014 NCSU. All rights reserved.
//

#include "temp.h"

int temp::getinput()
{
    cout << "What is the temperature in Fahrenheit??" << endl;
    cin  >> fahrenheit;
    cout << endl;
    return 0;
}

double temp::fah2cel(double fahrenheit)
{
    return ((fahrenheit - 32)*5/9);
}

int temp::displayoutput()
{
    cout << "The temperatur in Celcius is: " << fah2cel(fahrenheit) << endl;
    return 0;
}

