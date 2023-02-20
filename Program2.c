#include<stdio.h>
int main(){
    int k,num;
    scamf("%d %d",&num,&k);
    while(k--){
        num=num/10;
    }
    printf("%d",num%10);
    return 0;
}