#include<stdio.h>
int main() {
    char a[100];
    int c,d,tcase,j,i;
    scanf("%d",&tcase);

    for(i=0; i<tcase; i++){

        scanf("%s",a);
        for(j=0; j<3; j=j+2) {
            c=a[j]-48;
            d+=c;
        }
        printf("%d\n",d);
        d=0;

    }
    return 0;
}
