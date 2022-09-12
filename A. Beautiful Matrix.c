#include<stdio.h>
#include<math.h>
int main() {
    int a,i,j,t;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            scanf("%d",&a);
            if(a==1){
                t=abs(i-3)+abs(j-3);
            }
        }
    }
 printf("%d",t);
    return 0;
}
