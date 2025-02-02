#include <stdio.h>

int main() {
    int a,largest = -1,count=-2;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0;j<a;j++){
        int c = 0;
        for(int k = 0;k<a;k++){
            if(arr[j]==arr[k]){
                c++;
            }
        }
        if(c == count){
            largest = -1;
            break;
        }
        else if(c>count){
            count = c;
        }
    }

    printf("%d",largest);

    return 0;
}