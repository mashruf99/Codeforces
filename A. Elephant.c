#include<stdio.h>
int main() {
    int ts,temp,ns,sum=0,f=0,i;
    scanf("%d",&ts);
    for(i=0; i<10; i++) {
        if(ts>=5) {
            ns=ts/5;
            ts=ts%5;
        } else if(ts==4) {
            ns=ts/4;
            ts=ts%4;
        } else if(ts==3) {
            ns=ts/3;
            ts=ts%3;
        } else if(ts==2) {
            ns=ts/2;
            ts=ts%2;
        } else if(ts==1) {
            ns=ts/1;
            ts=ts%1;
        }

        sum=sum+ns;
        if(ts==0)break;
    }
    printf("%d\n",sum);

    return 0;
}

