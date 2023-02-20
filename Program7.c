#include<stdio.h>
int main(){
    int num,num1;
    scanf("%d %d",&num,&num1);
    int sum=0;
    while(num>0){
        sum=sum+((num%10)+(num1%10));
        num=num/10;
        num1=num1/10;
    }
    printf("%d",sum);
    return 0;
}