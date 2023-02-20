#include<stdio.h>
int main(){
    int num,temp;
    scanf("%d",&num);
    temp=num;
    int count=1;
    while(num>0){
        num=num/10;
       count=count*10;
    }
    count=count/10;
    printf("%d",(temp/count)%10);
    return 0;
}