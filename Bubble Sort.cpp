#include <stdio.h>
int main()
{
    int i,j,t,n[10];
    printf("Enter 10 numbers\n");
    scanf("%d",&n[i]);
    for(i=0;i<=9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if (n[j]>n[j+1])
            {
            t=n[j];
            n[j]=n[j+1];
            n[j+1]=t;
        }
    }
}
for(i=0;i<=9;i++)
    printf("%d \t",n[i]);
return 0;
}
