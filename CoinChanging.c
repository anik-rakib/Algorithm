//coin change
#include <stdio.h>
void main ()
{
    int i, j,k, a, n,m;
    printf("Enter the amount of Taka:\n");
    scanf("%d", &m);
    printf("Enter how many Notes you want?\n");
    scanf("%d", &n);
    int b[n],s[n];
    printf("Enter the value of Notes:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);
        s[i]=0;


    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (b[i] < b[j])
            {
                a = b[i];
                b[i] = b[j];
                b[j] = a;
            }
        }
    }
    for(k=0;k<n;k++)
    {
        if(b[k]<=m)
        {
            s[k]=m/b[k];
            m=m%b[k];
        }
        else
        {
            s[k]=0;
        }
    }
    for (i = 0; i < n; ++i)
    {
        printf("%d taka used %d times\n", b[i],s[i]);
    }
}
