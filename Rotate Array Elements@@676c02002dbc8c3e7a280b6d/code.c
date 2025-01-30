#include <stdio.h>

int main() {
    int a,k,temp;
    scanf("%d",&a);
    int marks[a],arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&marks[i]);
    }
    scanf("%d",&k);

    for(j = 0;j<k;j++){
        temp = arr[a-1];
        for(int k = 0;k<a;k++){
            arr[k+1] = arr[k];
        }
        arr[0] = temp;
    }

    for(int m=0;m<a;m++){
        printf("%d\n",arr[m]);
    }
    return 0;
}