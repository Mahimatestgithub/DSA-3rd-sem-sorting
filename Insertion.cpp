#include <stdio.h>
void printArray(int*A,int n)
{
    for(int i=0;i<n;i++)
    {

        printf("%d\t",A[i]);
    }
    printf("\n");
}
void insertionSort(int* A,int n)
{
    int key,j;
    for(int i=1;i<=n-1;i++)
    {
        key=A[i];
        j=i-1;
        while(j>=0&&A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
    A[j+1]=key;
    }
}
int main()
{
int arr[50],n,i;
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("The unsorted array is :\n");
printArray(arr,n);
insertionSort(arr,n);
printf("The sorted array is :\n");
printArray(arr,n);
return 0;
}
