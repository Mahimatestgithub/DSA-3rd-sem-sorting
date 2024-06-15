#include <stdio.h>
int main()
{
    int i,j,t,min,n[10];
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
    scanf("%d",&n[i]);
    for(i=0;i<=9;i++)
    {
        min=i;
        for(j=i+1;j<=9;j++)
        {
            if (n[j]<n[min])
                min=j;
        }
        t=n[i];
        n[i]=n[min];
        n[min]=t;
        }
        printf("Sorted list\n");
    for(i=0;i<=9;i++)
    printf("%d  \t",n[i]);
    return 0;
}
