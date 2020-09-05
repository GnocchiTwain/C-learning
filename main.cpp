//
//  main.cpp
//  array new arrangement
//
//  Created by Gnocchi on 5/9/2020.
//  Copyright © 2020 gnocchi. All rights reserved.
//

//This program arrange a sorted ascending array into the form that max-min-2ndmax-2ndmin and so on.

#include <iostream>
using namespace std;
void maxmin(int arr[], int size){
    int * result = new int[size];
    
    int pointersamll = 0, pointerlarge = size-1;
    bool switchPointer = true;  //switch it the point of control arrange the element.
    for (int i = 0; i<size; i++ ){
        if(switchPointer){
            result[i] = arr[pointerlarge--];}
        else {
            result[i] = arr[pointersamll++];
            }
        switchPointer = !switchPointer;
        }
    for(int j = 0; j<size; j++){
        arr[j] = result[j];
    }
    delete [] result;
    }



int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[7] = {2,3,4,5,6,7,8};
    maxmin(arr,7);
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
        
    }
}
