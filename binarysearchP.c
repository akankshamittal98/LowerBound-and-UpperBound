#include<stdio.h>
int main()
{
    int a[]={1,2,2,2,2,3,3,3,5,6};
    int l=0,r=10;
    int n,m;
    scanf("%d",&n);
    while(l<r)
    {
        m=(l+r)/2;
        if(a[m]>=n)
        {
            r=m;
        }

        else
        {
            l=m+1;
        }
    }
    printf("lower bound=%d\n",l);
    l=0; r=10;
     while(l<r)
    {
        m=(l+r)/2;
        if(a[m]>n)
        {
            r=m;
        }

        else
        {
            l=m+1;
        }
    }
    printf("upper bound =%d\n",l);
}
