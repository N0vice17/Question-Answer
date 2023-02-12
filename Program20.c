#include<stdio.h>
int main(){
    for(int i=10;i<=99;i++){
        int num=((i%10)*10)+(i/10);
        if(num%7==0){
            printf("%d\n",i);
        }
    }
    return 0;
}