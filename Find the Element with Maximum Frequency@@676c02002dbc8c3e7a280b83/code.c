#include <stdio.h>

int main() {
    int a,large=0,count=0;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int c;
    for(int j = 0;j<a;j++){
        c = 0;
        for(int k = 0;k<a;k++){
            if(arr[j]==arr[k]){
                c++;
            }
        }
        if(count<c){
            count = c;
            large = arr[j];
        }
    }
    printf("%d",large);
    return 0;
}