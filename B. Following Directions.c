#include<stdio.h>
void ok()
{
    int s,i,c=0,d=0;
    scanf("%d",&s);
    char a[s];
    scanf("%s",a);
    for(i=0; i<s; i++)
    {
        if(a[i]=='U'){
            c++;
        }
        else if(a[i]=='D')
        {
            c--;
        }
        else if(a[i]=='R')
        {
            d++;
        }
        else if(a[i]=='L')
        {
            d--;
        }

        if(c==1 && d==1)
        {
            return printf("YES\n");
        }
    }
    return printf("NO\n");
}


int main()
{
    int tcase,i;
    scanf("%d",&tcase);
    for(i=1; i<=tcase; i++){
    ok();
    }
    return 0;
}
