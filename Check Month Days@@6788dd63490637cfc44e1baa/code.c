#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a==1){printf("%d",31);}
    if(a==2){printf("%d",28);}
    if(a==3){printf("%d",31);}
    if(a==4){printf("%d",30);}
    if(a==5){printf("%d",31);}
    if(a==6){printf("%d",30);}
    if(a==7){printf("%d",31);}
    if(a==8){printf("%d",31);}
    if(a==9){printf("%d",30);}
    if(a==10){printf("%d",31);}
    if(a==11){printf("%d",30);}
    if(a==12){printf("%d",31);}
    if(a<1 || a>12){
        printf("Invalid month");
    }
    return 0;
}