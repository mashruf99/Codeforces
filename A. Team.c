#include<stdio.h>

int main() {
    int a,i,q,r,s,j,m=0,z=0;
    scanf("%d",&a);
    for(i=0; i<a; i++) {
            scanf("%d %d %d",&q,&r,&s);
            m=q+r+s;
            if(m>=2)
                z++;
            else{}


    }
    printf("%d",z);

    return 0;
}
