#include <stdio.h>

int main() {
    int a,large = -7;
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        if((arr[j] > large) && (arr[j]%2==0)){
            large = arr[j];
        }
    }
    if(large%2!=0){
        large = -1;
    }
    printf("%d",large);
    return 0;
}