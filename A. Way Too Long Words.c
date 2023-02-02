#include<stdio.h>
#include<string.h>

void ok()
{
    char a[102];
    int l;
    scanf("%s",a);
    l= strlen(a);
    if(l>10)
      return  printf("%c%d%c\n",a[0],l-2,a[l-1]);
    else
       return printf("%s\n",a);
}

int main()
{
    int tcase,i;
    scanf("%d",&tcase);
    for(i=0; i<tcase; i++)
    {
            ok();
    }


    return 0;
}
