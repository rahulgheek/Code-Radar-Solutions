#include <stdio.h>

int main() {
    int a,k,temp;
    scanf("%d",&a);
    int marks[a],arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&marks[i]);
    }
    scanf("%d",&k);

    for(int j = 0;j<k;j++){
        arr[0] = marks[a-1];
        for(int l = 1;l<(a-1);l++){
            arr[l] = marks[l+1];
        }
    }

    for(int m=0;m<a;m++){
        printf("%d\n",arr[m]);
    }
    return 0;
}