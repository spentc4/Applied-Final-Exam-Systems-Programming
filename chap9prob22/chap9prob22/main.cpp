//
//  main.cpp
//  chap9prob22
//
//  Created by Spencer Curran on 12/2/20.
//  Copyright © 2020 Spencer Curran. All rights reserved.
//

#include <iostream>

using namespace std;
int finder(char *ptr1, char *ptr2);
int main(int argc, const char * argv[]) {
    char string1[100];
    char string2[20];
    
    cout << "Enter any string: " << endl;
    cin >> string1;
    cout << "Enter a pattern to look for in the entered string: " << endl;
    cin >> string2;
    
    char *pointerString1 = string1;
    char *pointerString2 = string2;
    
    cout << "The pattern you were looking for occurred: " << finder(pointerString1,pointerString2) << " times in the string." << endl;
    
    
    return 0;
}

int finder(char *pointer1, char *pointer2) {
    int counter = 0;
    char *temp,arraytmp[200];
    temp = arraytmp;
    strcpy(temp,pointer1);
    do {
        temp = strstr(temp,pointer2);
        if(temp != NULL){
            counter++;
            strcpy(temp,&temp[1]);
        }
    } while (temp != NULL);
    return counter;
}
