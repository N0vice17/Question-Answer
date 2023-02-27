/*
    program to print the prime number in fibonacci series.
*/
#include<stdio.h>
int main(){
    int a=0,b=1,sum=a+b;
    int length;
    scanf("%d",&length);
    for(int i=0;i<length;i++){
        if(sum>1){
            int a=0;
            for(int j=2;j*j<=sum;j++){
                if(sum%j==0){
                    a=1;
                    break;
                }
                else{
                    a=0;
                }
            }
            if(a==0){
                printf("%d",sum);
                printf(" ");
            }
        }
        a=b;
        b=sum;
        sum=a+b;
    }
    return 0;
}