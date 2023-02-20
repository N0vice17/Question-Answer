#include<stdio.h>
int main(){
    int k,num;
    scanf("%d %d",&num,&k);
    while(k--){
        num=num/10;
    }
    printf("%d",num);
    return 0;
}