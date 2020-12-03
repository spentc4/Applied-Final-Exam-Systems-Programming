//
//  main.cpp
//  chap8prob11
//
//  Created by Spencer Curran on 12/2/20.
//  Copyright © 2020 Spencer Curran. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
const int NROWS = 7;
const int NCOLS = 10;
int main(int argc, const char * argv[]) {
    // insert code here...
    float total = 0;
    float average;
    float output[NROWS][NCOLS];
    unsigned int counter;
    int row, col;
    ifstream file;
    file.open("power1.dat");
    if(file){
        for(row=0;row<NROWS;row++){
            for(col=0;col<NCOLS;col++){
                file>>output[row][col];
                total+=output[row][col];
            }
        }
    }
    file.close();
    average = total/(NROWS*NCOLS);
    for(row=0;row<NROWS;row++){
        for(col=0;col<NCOLS;col++){
            if(output[row][col]>average)
                counter++;
        }
    }
    cout<<"the average power output was "<<average<<" megawatts."<<endl;
    cout<<"the amount of days over the average was "<<counter<<" days."<<endl;
    return 0;
}
