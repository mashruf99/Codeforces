#include<stdio.h>
#include<string.h>
int main() {
    int n,i,m=0;
    char s[51];
    scanf("%d",&n);
    scanf("%s",s);

    for(i=1; i<n; i++){
       if(s[i]==s[i-1]){
        m++;
       }
    }
    printf("%d\n",m);

    return 0;
}
