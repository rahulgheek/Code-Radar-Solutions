#include <stdio.h>
int isinarr(int arr[],int a,int n){
    for(int k = 0;k<n;k++){
        if(arr[k] == a){
            return 1;
        }
    }
    return 0;
}
int main() {
    int a,count=0,m=0;
    scanf("%d",&a);
    int arr[a],arr2[a];
    
    for(int i = 0;i<a;i++){
        scanf("%d ",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        count = 0;
        if(!isinarr(arr2,arr[j],a)){
            for(int k = 0;k<a;k++){
                if(arr[j] == arr[k]){
                    count++;
                }
            }
            printf("%d %d\n",arr[j],count);
            arr2[m] = arr[j];
            m++;
        }
    }
    return 0;
}