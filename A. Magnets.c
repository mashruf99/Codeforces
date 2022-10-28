#include<stdio.h>
int main() {
    int t,i,c=1;
    scanf("%d",&t);
    int a[t];
    scanf("%d",&a[0]);
    for(i=1; i<t; i++) {
        scanf("%d",&a[i]);
        if(a[i]==1 || a[i]==10) {
            if(a[i]!=a[i-1]) {
                c++;
            }

        }
    }
    printf("%d",c);

    return 0;
}
