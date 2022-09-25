#include<stdio.h>
#include<string.h>

int main() {
    int i,ls,j,sum,f=0;
    char a[100],b[26];
    scanf("%s",a);
    ls=strlen(a);

    for(i=0; i<ls; i++) {

        for(j=i-1; j>=0; j--) {
            if(a[i]==a[j]) {
                f=1;
                break;
            }
        }
        if(f==0)sum=sum+1;
        f=0;
    }

    if(sum%2==0)printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");

    return 0;
}
