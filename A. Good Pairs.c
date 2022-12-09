#include<stdio.h>
long long int dude() {
            int t,i,j,n,m;
            scanf("%d",&t);
            long long int a[t],max,min;
            for(i=0; i<t; i++) {
                scanf("%lld",&a[i]);
            }
            max=a[0];
            min=a[0];
            m=0;
            n=0;
            for(j=1; j<t; j++) {
                if(a[j]>max) {
                    max=a[j];
                    n=j;
                }
                if(a[j]<min) {
                    min=a[j];
                    m=j;
                }
            }
            printf("%d %d\n",m+1,n+1);

}
int main() {
            int tcase,i;
            scanf("%d",&tcase);
            for(i=0; i<tcase; i++) {
                dude();
            }
            return 0;
}


