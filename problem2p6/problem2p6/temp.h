//
//  converter.h
//  problem2p6
//
//  Created by Dendi Suhubdy on 8/25/14.
//  Copyright (c) 2014 NCSU. All rights reserved.
//

#ifndef __problem2p6__converter__
#define __problem2p6__converter__

#include <iostream>

using namespace std;

class temp
{
private:
protected:
    double fahrenheit;
    double celcius;
public:
    int getinput();
    double fah2cel(double fahrenheit);
    int displayoutput();
};

#endif /* defined(__problem2p6__converter__) */
