#include<stdio.h>
#include<math.h>

int main() {
    int a,b,i,j,c=1,f=0,l,m;
    scanf("%d %d",&a,&b);
    if(a>b) {
        return 0;
    } else {
        if(a>=1 && a<=10) {
            a=3*a;
            b=2*b;
            if(a>b) {
                printf("1\n");
            } else {
                for(i=2; i<51; i++) {
                    a=3*a;
                    b=2*b;
                    if(a>b)f++;
                    if(f==1) break;
                }
                printf("%d",i);
            }
        }
    }


    return 0;
}

