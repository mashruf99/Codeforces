#include<stdio.h>
int main() {
    int a,s,k,r,i=1;
    scanf("%d %d",&k,&r);
    while(1) {
        a=k*i;
        s=a%10;
        if(s==0){
            break;
        }
        if(r==s) {
            break;
        }
        i++;
    }
    printf("%d",i);

    return 0;
}
