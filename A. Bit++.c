#include<stdio.h>
#include<string.h>
int main(){
    char a[5];
    int x,i,k=0;
    scanf("%d",&x);
    for(i=0; i<x; i++){
       scanf(" %s",a);
        if(a[1]=='+'){
            k++;
        }
        else if(a[1]=='-'){
            k--;
        }
    }
printf("%d",k);



return 0;
}
