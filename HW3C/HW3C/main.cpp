//
//  main.cpp
//  HW3C
//
//  Created by Jeffrey Scott Scroggs on 9/10/24.
//  Copyright (c) 2014 Dr. Jeff S Scroggs. All rights reserved.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

void readCSV(istream &input, vector< vector<string> > &output)
{
    string csvLine;
    // read every line from the stream
    while( getline(input, csvLine) )
    {
        istringstream csvStream(csvLine);
        vector<string> csvColumn;
        string csvElement;
        // read every element from the line that is seperated by commas
        // and put it into the vector or strings
        while( getline(csvStream, csvElement, ',') )
        {
            csvColumn.push_back(csvElement);
        }
        output.push_back(csvColumn);
    }
}

void writeCSV(ofstream myfile,csvVector csvData)
{
    myfile << "\t\t\tData Table \t\t\t" << endl;
    
    for(int col=1; col <=3; col++)
    {
        myfile << col << "  ";
    }
    
    myfile << endl;
    
    for(csvVector::iterator i = csvData.begin(); i != csvData.end(); ++i)
    {
        for(vector<string>::iterator j = i->begin(); j != i->end(); ++j)
        {
            a=*j;
            myfile << a <<"  ";
            
        }
        myfile << endl;
    }
    myfile.close();
}

int main(void)
{
    string inFileName;
    string folderin = "/Documents/inFile.csv";
    inFileName = getenv("HOME") + folderin;
    string outFileName;
    string folderout = "/Documents/output.txt";
    outFileName = getenv("HOME") + folderout;
    string a;
    fstream file(inFileName, ios::in);
    
    myfile.open (outFileName);
    
    if(!file.is_open())
    {
        cout << "File not found! " << endl;
        return 1;
    }
    // typedef to save typing for the following object
    typedef vector< vector<string> > csvVector;
    csvVector csvData;
    
    readCSV(file, csvData);
    
    // print out read data to prove reading worked

    writeCSV(myfile, csvData);
    return 0;
}