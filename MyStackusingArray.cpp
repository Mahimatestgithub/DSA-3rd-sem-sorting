#include <stdio.h>
#include <stdlib.h>

int Stack[10], stackTop=-1, maxsize=10,counter = 0;

void pushArray()
{
    if (stackTop >= maxsize-1)
        printf("Stack Overflow\n");
    else
    {
printf("Enter the data ");
        stackTop++;
        scanf(" %d", &Stack[stackTop]);
        counter++;
    }
}
int popArray()
{
     if(stackTop==-1)
    {
        printf("Stack Underflow \n");
        return -1;
    }
    else
        {
            return Stack[stackTop--];
            counter--;
        }

}
void PrintStackArray()
{
    printf("\n\nStack: ");
    for(int i=counter-1;i>=0;i--)
    {
        printf(" %d ",Stack[i]);
    }
}
int main()
{
    int ch;
    printf("\nWhich operation do you want to perform?\n");
            printf(" 1. Push\n");
            printf(" 2. Pop\n");
            scanf("%d", &ch);

            while(ch==1||ch==2)
            {
                switch (ch)
                {
                     case 1:
                    pushArray();
                    PrintStackArray();
                    break;
                case 2:
                    printf("%d is popped\n", popArray());
                    PrintStackArray();
                    break;
                default:
                       printf("Invalid choice\n");
                    break;
                }
            printf("\nWhich operation do you want to perform?\n");
            printf(" 1. Push\n");
            printf(" 2. Pop\n");
            scanf("%d", &ch);
            }
             return 0;
}


