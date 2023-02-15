#include<stdio.h>
int main(){
    for(int i=10;i<=99;i++){
        int newnum=((i%10)*10)+(i/10);
        if(newnum%7==0){
            printf("%d",i);
        }
    }
    return 0;
}