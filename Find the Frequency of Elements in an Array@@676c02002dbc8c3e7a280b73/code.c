#include <stdio.h>

int isinarr(int arr[],int a){
    for(int k = 0;k<a;k++){
        if(arr[k] == a){
            return 0;
        }
    }
    return 1;
}

int main() {
    int a,count=0,m=0;
    scanf("%d",&a);
    int arr[a],arr2[a];
    
    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }

    

    return 0;
}