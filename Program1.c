/*
    1
    1 2
    1 2 3
    1 2 3 4 


*/
#include<stdio.h>
int main(){
    int length;
    scanf("%d",&length);
    for(int i=1;i<=length;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}