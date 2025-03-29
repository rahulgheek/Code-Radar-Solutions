#include <stdio.h>

int findKthMissing(int arr[],int n,int k){
    int res = 1,count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]<0){
            continue;
        }
        else if(res == arr[i]){
            res++;
        }
        else{
            count++;
            res+=2;
            if(count == k){
                return res;
            }
        }
    }
}