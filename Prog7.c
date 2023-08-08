#include<stdio.h>
int length(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count+=1;
    }
    return count;
}
void rev(char str[],int start,int end){
    char c=str[start];
    str[start]=str[end];
    str[end]=c;
}
int main(){
    char str[100];
    scanf("%s",str);
    int len=length(str);
    for(int i=0;i<len/2;i++){
        rev(str,i,len-i-1);
    }
    printf("%s",str);
    return 0;
}