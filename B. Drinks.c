#include<stdio.h>
int main() {
    int a,i,sum=0, p;
    scanf("%d",&a);
    float r;
    for(i=0; i<a; i++) {
        scanf("%d",&p);
        sum+=p;
    }

    r = sum * 100.0 / (a * 100);
    printf("%0.5f\n",r);
    return 0;
}
