#include<stdio.h>
#include<string.h>
int main() {
    char a[]="314159265358979323846264338327",b[35];
    int i,c=0,t;
    scanf("%d",&t);
    while(t--) {
        c=0;
        scanf("%s",b);
        int l= strlen(b);
        for(i=0; i<l; i++) {
            if(a[i]!=b[i]) {
                c=c+0;
                break;
            } else
                c=c+1;
        }
        printf("%d\n",c);

    }
    return 0;
}
