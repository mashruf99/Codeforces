#include<stdio.h>
int main(){
    int a[3],i,j,temp=0,r;
    for(i=0; i<3; i++){
        scanf("%d",&a[i]);
    }
   for(i=0; i<3; i++) {
        for(j=i+1; j<3; j++) {
            if(a[j]<a[i]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
   }
 r=(a[1]-a[0])+(a[2]-a[1]);
 printf("%d",r);

return 0;
}
