#include<stdio.h>
#include<math.h>
int main() {
    int i;
    long long int tcase,k,j,f,t,m,cf;
    scanf("%lld %lld",&tcase,&k);
    scanf("%lld %lld",&f,&t);
    if(t>k){
            m=(f-(t-k));
        }
        else{
            m=f;
        }

    for(i=1; i<tcase; i++) {
        scanf("%lld %lld",&f,&t);
        if(t>k)
            cf=(f-(t-k));
        else
            cf=f;

        if(cf>m){
            m=cf;
        }

    }
   printf("%lld",m);
    return 0;
}
