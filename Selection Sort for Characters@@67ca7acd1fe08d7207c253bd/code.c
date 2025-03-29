#include <stdio.h>
void selectionSort(char arr[],int n){
    char temp;
    for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(char arr[],int n){
    for(int m = 0;m<n;m++){
        printf("%c ",arr[m]);
    }
}