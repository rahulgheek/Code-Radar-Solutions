#include <stdio.h>
void bubblesort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int findUnsortedSubarray(int arr[],int n){
    int count = 0;
    int arr1[n];
    for(int i = 0;i<n;i++){
        arr1[i] = arr[i];
    }

    bubblesort(arr1,n);

    for(int j = 0;j<n;j++){
        if(arr[j] != arr1[j] && (arr[j+1]>arr1[j+1]) || arr[j+1]<arr1[j+1]){
            count++;
        }
    }

    return count;
}