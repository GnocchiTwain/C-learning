//
//  main.cpp
//  quick_sort
//
//  Created by Gnocchi on 31/8/2020.
//  Copyright © 2020 gnocchi. All rights reserved.
//
// This is the code for quick sort.
#include <iostream>
using namespace std;
//Basically,the partition function select the last element of the array as the pivot,
//check all the element behind it, if the element is smaller than the pivet, it will be put to the left, index i is used to count the number of the element which is smaller than the pivot up till now. Finally the pivot will be put to the right of the i position. That is, in the end, the left elements of pivot are all smaller than it, the right elements of pivot are all larger than it. It mutate te input array and return the finally position of the pivot.
int partition(int arr[], int low, int high){
    int pivot =arr[high];
    int i = (low-1);
    for(int j = low; j<high; j++){
        if(arr[j] <= pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return i+1;
    
    
}

void sort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        sort(arr,low,pi-1);
        sort(arr,pi+1,high);//iteratively apply the sort to the whole array
    }
}


int main() {
    int arr[5] = {9,3,4,5,6};
    sort(arr,0,5);
    for(int i; i < 5; i++){
        cout << arr[i] << " ";
    }
}
