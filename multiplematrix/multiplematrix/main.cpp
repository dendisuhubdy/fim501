//
//  main.cpp
//  multiplematrix
//
//  Created by Dendi Suhubdy on 10/1/14.
//  Copyright (c) 2014 NCSU. All rights reserved.
//

#include <iostream>
#include <cstdlib>

#define DIM1 10
#define DIM2 10

int main(int argc, const char * argv[]) {
    int newMatrix[DIM1][DIM2];
    for (int iRow = 0; iRow < DIM1; iRow++) {
        for (int iCol=0; iCol<DIM2;iCol++) {
            newMatrix[iRow][iCol] = 100 * iCol + iRow;
        }
    }
    
    for (int iRow = 0; iRow < DIM1; iRow++) {
        for (int iCol=0; iCol< DIM2;iCol++) {
            std::cout << (long int) &newMatrix[iRow][iCol] << ' ';
        }
        std::cout << std::endl;
    }
    return EXIT_SUCCESS;
}