#include <stdio.h>

int findKthMissing(int arr[],int n,int k){
    int res = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]<0){
            continue;
        }
        else{
            if(k == res){
                return arr[i];
            }
            res++;
        }
    }
}