#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],c[n],d[n],e[n],i,j=0,k=0,l=0,s;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]==1)
        {
            c[j]=i+1;
            j++;
        }
        else if(a[i]==2)
        {
            d[k]=i+1;
            k++;
        }
        else if(a[i]==3)
        {
            e[l]=i+1;
            l++;
        }
    }

    if(j<k && j<l || j<k && j==l || j<l && j==k || j==k && j==l){
        printf("%d\n",j);
        s=j;
    }
    else if(k<j && k<l || k<l && k==j || k<j && k==l){
        printf("%d\n",k);
        s=k;
    }
    else if(l<j && l<k || l<j && l==k || l<k && l==j){
        printf("%d\n",l);
        s=l;
    }
    for(i=0; i<s; i++){
        printf("%d %d %d\n",c[i],d[i],e[i]);
    }
    return 0;
}
