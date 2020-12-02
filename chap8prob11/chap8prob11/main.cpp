//
//  main.cpp
//  chap8prob11
//
//  Created by Spencer Curran on 12/2/20.
//  Copyright © 2020 Spencer Curran. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
const int nRow = 7;
const int nCol = 10;
int main(int argc, const char * argv[]) {
    // insert code here...
    double totalPower = 0;
    double avgPower;
    double powerOutput[nRow][nCol];
    unsigned int countDays = 0;
    int row,col;
    
    ifstream power;
    power.open("power1.dat");
    if(power){
        for (row=0; row < nRow; row++){
            for (col = 0; col < nCol; col++){
            power >> powerOutput[row][col];
            totalPower += powerOutput[row][col];
            }
        }
    } else {}
    
    power.close();
    avgPower = totalPower/(nRow*nCol);
    for (row=0; row < nRow; row++){
        for (col=0;col < nCol; col++){
            if (powerOutput[row][col] > avgPower)
            countDays++;
        }
    }
    cout << "power output: " << avgPower << " megaWatts " << "days with power output greater than average " << countDays << endl;
    return 0;
}
