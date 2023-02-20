#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count=num%10;
    num=num/10;
    int sum=0;
    while(num>0){
        sum=sum+(count*(num%10));
        count=num%10;
        num=num/10;
    }
    printf("%d",sum);
    return 0;
}