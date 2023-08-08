#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void part1(){
    char *arr[]={"Hello","Debojit"};
    char str[100];
    scanf("%s",str);
    bool check=false;
    for(int i=0;i<2;i++){
        if(strcmp(str,arr[i])==0){
            check=true;
            break;
        }
    }
    if(check){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
void part2(){
    char *arr[]={"Debojit","Hello","Meow","meow","Hey"};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(arr[i],arr[j])>0){
                char *c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%s\n",arr[i]);
    }
}
int main(){ 
    part2();
    return 0;
}