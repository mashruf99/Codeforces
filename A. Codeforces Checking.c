#include<stdio.h>
#include<string.h>

const char* a="codeforces";
void ok()
{
        char b;
        int j,l;
        l=strlen(a);
        scanf(" %c",&b);

        for(j=0; j<l; j++) {

            if(a[j]==b) {
                printf("Yes\n");
                return;
            }

        }
         printf("No\n");

}

int main(){
    int t,i;
    scanf("%d",&t);
  for(i=0; i<t; i++){
        ok();
    }
    return 0;
}
