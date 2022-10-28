#include<stdio.h>
int main() {
    long long a;
    int c=0;
    scanf("%lld",&a);
    while(a>=1){
        if(a%10==4 || a%10==7){
            c++;
        }
        a=a/10;
    }
    if(c==4 ||c==7){
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}

