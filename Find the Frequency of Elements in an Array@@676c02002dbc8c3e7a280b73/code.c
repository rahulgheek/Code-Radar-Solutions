#include <stdio.h>

int isinarr(int arr[],int a){
    flag = 1;
    for(int k = 0;k<a;k++){
        if(arr[k] == a){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {
    int a,count=0,m=0;
    scanf("%d",&a);
    int arr[a],arr2[a];
    
    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        if(isinarr(arr2,arr[j])){
            printf("%d",1);
        }


    }

    return 0;
}