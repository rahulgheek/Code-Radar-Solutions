#include <stdio.h>

int isinarr(int arr[],int b,int n){
    for(int k = 0;k<n;k++){
        if(arr[k] == b){
            return 1;
        }
    }
    return 0;
}

int main() {
    int a,largest = -1,count=0,n=0,d=0;
    scanf("%d",&a);
    int arr[a],arr2[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        int c = 0;
        d = 0;
        if(isinarr(arr2,arr[j],d)){
        for(int k = 0;k<a;k++){
            if(arr[j]==arr[k]){
                c++;
                }
                count++;
            }
            d++;
        }
        if(c > n){
            largest = arr[j];
            n = c;
        }
        else if(c == n){
            largest = -1;
        }   
    }
    printf("%d",largest);

    return 0;
}