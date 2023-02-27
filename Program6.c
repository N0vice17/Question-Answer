/*
        5 5 5 5 5 
        5 4 4 4 4 
        5 4 3 3 3 
        5 4 3 2 2 
        5 4 3 2 1 
*/
#include<stdio.h>
int main(){
    int length;
    scanf("%d",&length);
    //int count=5;
    int a=1;
    for(int i=length;i>=1;i--){
        int b=length-a;
        int count1=length;
        if(i==length){
            for(int j=1;j<=length;j++){
                printf("%d",length);
                printf(" ");
            }
            printf("\n");
        }
        else{
            for(int j=0;j<a;j++){
                printf("%d",count1-j);
                printf(" ");
            }
            for(int j=1;j<=b;j++){
                printf("%d",i);
                printf(" ");
            }
            a++;
            printf("\n");
        }
    }
    return 0;
}