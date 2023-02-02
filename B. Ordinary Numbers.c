#include<stdio.h>

void ok() {
    int a,res=0;
    long long i;
    scanf("%d",&a);
    for(i=1; i<=a; i=i*10+1)
    {
          for (int d=1; d<=9;  d++)
          {
              if(i*d<=a){
                res++;
              }
          }
    }
    return printf("%d\n",res);

}

    int main(){
        int tcase,i;
        scanf("%d",&tcase);
        for(i=0; i<tcase; i++){
            ok();
        }

        return 0;
    }
