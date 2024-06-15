#include <stdio.h>
#include <stdlib.h>

int Queue[10], queueFront= 0,queueRear=-1, maxsize=10;

void enqueueArray()
{
    if (queueRear >= maxsize-1)
        printf("queue Overflow\n");
    else
    {
        printf("Enter the data ");
        queueRear++;
        scanf(" %d", &Queue[queueRear]);
    }
}
void dequeueArray()
{
    if(queueFront > queueRear)
    {
        printf("queue Underflow \n");
    }
    else
        printf("%d is dequeued\n", Queue[queueFront++]);
}

void PrintQueueArray()
{
    printf("Queue: ");
    for(int i=queueFront;i<=queueRear;i++)
        printf("  %d",Queue[i]);
}
int main()
{
    int ch;
            printf("\nWhich operation do you want to perform?\n");
            printf(" 1. enqueue\n");
            printf(" 2. dequeue\n");
            scanf("%d", &ch);

            while(ch==1||ch==2)
            {
                switch (ch)
                {
                case 1:
                    enqueueArray();
                    PrintQueueArray();
                    break;
                case 2:
                    dequeueArray();
                    PrintQueueArray();
                    break;
                default:
                    printf("Invalid choice\n");
                    break;
                }
            printf("\nWhich operation do you want to perform?\n");
            printf(" 1. enqueue\n");
            printf(" 2. dequeue\n");
            scanf("%d", &ch);
            }
    return 0;
}

