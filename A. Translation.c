#include<stdio.h>
#include<string.h>

int main(){
    char a[101],b[101],c[101];
    int i,l,j=0,d;
    gets(a);
    gets(c);
    l=strlen(a);
    for(i=l-1; i>=0; i--){
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
   d=strcmp(b,c);
   if(d==0)printf("YES");
   else printf("NO");
return 0;
}

