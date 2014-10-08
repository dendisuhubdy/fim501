//
//  main.cpp
//  dynamicdebug1
//
//  Created by Dendi Suhubdy on 9/15/14.
//  Copyright (c) 2014 NCSU. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[])
{
    string svalue;
    ifstream inFile("test.csv");
    getline (inFile, svalue, '\r');
    
    double dvalue;
    string::size_type sz;
    
    dvalue = stod(svalue, &sz);
    
    
    cout << "sz = " << sz << " and the dvalue is " << dvalue << endl;
    
    dvalue = stod(&svalue[sz+1], &sz);
    
    cout << "2nd sz = " << (sz+1) << " dvalue = " << dvalue << endl;
    
    //cout << svalue << endl;
    return 0;
}



/*
int main(int argc, const char * argv[])
{
    ofstream *outfile = new ofstream;
    
    for (int i = 0; i < 10; i++)
    {
        (*outfile) << "i= " << i << endl;
    }
    
    outfile->close();
    delete outfile;
    
    return 0;
}

*/