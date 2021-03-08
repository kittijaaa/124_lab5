#include<stdio.h>
int main()
{
    int n,m=0,i=1,j=0,k=0,a[3]= {2,3,5},x;
    scanf("%d",&n);
    for(i=1; i>0; i++)
    {
        x=i;
        for(j=0; j!=3;)
        {
            if(x%a[j]==0)
            {
                x/=a[j];
            }
            else j++;
        }
        if(x==1)
        {
            k++;
            if(k==n)
            {
                printf("%d",i);
                break;
            }
        }
    }
    return 0 ;
}
