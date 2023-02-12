#include<stdio.h>
int main(){
    for(int i=0;i<=80;i+=20){
        for(int j=i;j<=i+9;j++){
            printf("%d\n",j);
        }
    }
    return 0;
}