#include<stdio.h>
int main() {
    int a,n,c=0,i;
    scanf("%d",&a);
    scanf("%d",&n);
    int v[a];
    n=n-1;
    for(i=0; i<a; i++) {
        scanf("%d",&v[i]);
    }
    for(i=0; i<a; i++) {
        if(v[i]>=v[n]  && v[i]>0) {
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
