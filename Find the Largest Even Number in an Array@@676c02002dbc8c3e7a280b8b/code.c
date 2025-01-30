#include <stdio.h>

int main() {
    int a,large = -1;
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

    printf("%d",large);
    return 0;
}