#include <stdio.h>

int findKthMissing(int arr[],int n,int k){
    int res = 0,count = 0;
    int i = 0;
    while(res<40){
        if(res == arr[i]){
            res++;
            i++;
        }
        else if(res != arr[i]){
            count++;
            res++;
            if(count == k){
                break;
            }
        }
    }
    return res;
}