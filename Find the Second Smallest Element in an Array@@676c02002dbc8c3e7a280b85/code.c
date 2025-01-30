#include <stdio.h>

int main() {
    int a,least=-110,secondleast = -1;
    scanf("%d",&a);
    int arr[a];
    int arr1[100];

    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a-1;j++){
        if(least>arr[j] && arr[j]!=arr[j+1]){
            secondleast = least;
            least = arr[j];
        }
    }

    printf("%d",secondleast);

    return 0;
}