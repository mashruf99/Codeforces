#include<stdio.h>
int main(){
    int t,a,b,i;
    scanf("%d",&t);

    for(i=0; i<t; i++){
        scanf("%d %d",&a,&b);
        if(a==1){
            printf("0\n");
        }
        else if(a==2){
            printf("%d\n",b);
        }
        else
            printf("%d\n",2*b);
    }

return 0;
}
