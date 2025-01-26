#include <stdio.h>

int main() {
    int a,k,temp;
    scanf("%d",&a);
    int marks[a];
    for(int i = 0;i<a;i++){
        scanf("%d",%marks[i]);
    }
    scanf("%d",&k);

    for(int j = 0;j<k;j++){
        temp = marks[0];
        for(int l = 0;l<a;l++){
            marks[l] = marks[l-1];
        }
        marks[a-1] = temp;
    }

    for(int m=0;m<a;m++){
        printf("%d",marks[m]);
    }
    return 0;
}