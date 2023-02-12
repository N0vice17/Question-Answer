#include<stdio.h>
int main(){
    for(int i=10;i<=90;i+=20){
        for(int j=i;j<=i+9;j++){
            if(j%2==0){
                printf("%d\n",j);
            }
        }
    }
    return 0;
}