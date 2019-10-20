#include<stdio.h>
int main()
{
    int o,n;
    printf("How many number do you want?\n");
    scanf("%d",&n);
    int a[n];
    o=linearSearch(a,n);
}
int linearSearch(int a[],int n)
{
    int i,j,y,z,n1,pos,k,key=0,store;
    int b[n];
    printf("please insert number in array:\n");
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Output of the array:\n");
    for(j=0; j<n; j++)
    {
        printf("%d ",a[j]);
    }
    printf("\n");
    printf("Which number do you searching?\n");
    scanf("%d",&key);
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            n1=1;
            pos=i+1;
            for(j=i+1; j<n; j++)
            {
                if(a[j]==key && store>j-i)
                {
                    store=j-i;
                    y=i;
                    z=j;
                    k=1;
                }
            }
        }
    }
    if(k==1)
    {
        printf("the nearest key in array index %d %d\n",y,z);
        printf(" distance: %d\n",store);
    }
    if(n1==1) printf("the position of key %d ",pos);
    else printf("the element is not here!");
    printf("\n\n");
}

