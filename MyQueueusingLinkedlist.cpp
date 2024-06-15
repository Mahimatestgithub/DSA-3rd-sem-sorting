#include <stdio.h>
#include <stdlib.h>

struct queue_node
{
    int data;
    struct queue_node* link;
};

typedef struct queue_node qnode;
typedef qnode* list;

list enqueueLL(list rear)
{
    list temp = (list)malloc(sizeof(qnode));
    printf("Enter the data ");
    scanf(" %d",&(temp->data));
    temp->link=NULL;
    rear->link = temp;
    rear=temp;
    return rear;
}
list dequeueLL(list front)
{
    if(front==NULL)
    {
        printf("queue Underflow");
        return NULL;
    }
    printf("\n %d is dequeued", front->data);
    front=front->link;
    return front;
}
void PrintList(list front)
{
    list cur = front;
    printf("\n\nqueue: ");
    while (cur != NULL)
    {
        printf("%d ", cur->data);
        cur = cur->link;
    }
    printf("\n");
}
int main()
{
    int ch;

            list front = (list)malloc(sizeof(qnode));
            printf("Enter data \n");
            scanf(" %d", &(front->data));
            front->link = NULL;
            list rear = front;

            printf("\nWhich operation do you want to perform?\n");
            printf(" 1. enqueue\n");
            printf(" 2. dequeue\n");
            scanf(" %d", &ch);

            while(ch==1||ch==2)
            {
                switch (ch)
            {
                case 1:
                    rear = enqueueLL(rear);
                    PrintList(front);
                    break;
                case 2:
                    front = dequeueLL(front);
                    PrintList(front);
                    break;
                default:
                    printf("Invalid choice\n");
                    break;
            }
            printf("\nWhich operation do you want to perform?\n");
            printf(" 1. enqueue\n");
            printf(" 2. dequeue\n");
            scanf(" %d", &ch);
    }

    return 0;
}

