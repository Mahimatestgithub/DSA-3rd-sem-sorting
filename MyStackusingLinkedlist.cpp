#include <stdio.h>
#include <stdlib.h>
struct stack_node
{
    int data;
    struct stack_node* link;
};

typedef struct stack_node snode;
typedef snode* list;

list pushLL(list top)
{
    list temp = (list)malloc(sizeof(snode));
    printf("Enter the data ");
    scanf(" %d",&(temp->data));
    temp->link = top;
    top=temp;
    return top;
}
list popLL(list top)
{
    if(top==NULL)
    {
        printf("Stack Underflow");
        return NULL;
    }
    printf("\n %d is popped", top->data);
    top=top->link;
    return top;
}
void PrintList(list top)
{
    list cur = top;
    printf("\n\nStack: ");
    while (cur!= NULL)
    {
        printf("%d ", cur->data);
        cur = cur->link;
    }
    printf("\n");
}
int main ()
{
    int ch;
   list top=NULL;
   top = (list)malloc(sizeof(snode));
            printf("Enter data \n");
            scanf(" %d", &(top->data));
            top->link = NULL;

            printf("\nWhich operation do you want to perform?\n");
            printf(" 1. Push\n");
            printf(" 2. Pop\n");
            scanf(" %d", &ch);

            while(ch==1||ch==2)
            {
                switch (ch)
            {
                case 1:
                    top = pushLL(top);
                    PrintList(top);
                    break;
                case 2:
                    top = popLL(top);
                    PrintList(top);
                    break;
                default:
                    printf("Invalid choice\n");
                    break;
            }
            printf("\nWhich operation do you want to perform?\n");
            printf(" 1. Push\n");
            printf(" 2. Pop\n");
            scanf(" %d", &ch);
    }

    return 0;
}
