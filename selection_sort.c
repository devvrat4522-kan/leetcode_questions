#include<stdio.h>
int main()
{
    int n,arr[10],i,j,k,temp,sm_l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        sm_l=arr[i];
        for(j=i;j<n;j++)
        {
            if(arr[j]<=sm_l)
            {
                sm_l=arr[j];
                k=j;
            }
        }
        temp = arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}