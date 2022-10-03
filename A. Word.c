#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    int i,l,c=0,d=0;
    scanf("%s",s);
    l=strlen(s);
    for(i=0; i<l; i++) {
        if(s[i]>='A' && s[i]<='Z') {
            c++;
        } else if(s[i]>='a' && s[i]<='z') {
            d++;
        }
    }
    if(d>=c) {
        for(i=0; i<l; i++) {
            if(s[i]<97) {
                s[i]=s[i]+32;
            } else continue;
        }
    } else {
        for(i=0; i<l; i++) {
            if(s[i]>90) {
                s[i]=s[i]-32;
            }
                else continue;
            }
        }

    printf("%s\n",s);

    return 0;
}
