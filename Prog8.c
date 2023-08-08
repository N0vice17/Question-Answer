#include<stdio.h>
#include<stdbool.h>
int length(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count+=1;
    }
    return count;
}
int main(){
    char str[1000];
    scanf("%s",str);
    int len=length(str);
    bool check=true;
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            check=false;
            break;
        }
    } 
    if(check){
        printf("YES\n");
    } 
    else{
        printf("NO\n");
    }
    return 0;
}