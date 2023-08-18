#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int stack[100];
int cap;
int top=-1;
void Push(void);
void Pop(void);
void Show(void);
void main(void)
{
    int ch;
    printf("Enter the capacity of Stack: ");
    scanf("%d",&cap);
    while(1)
    {
        printf("\n1. push element in stack");
        printf("\n2. Pop the element");
        printf("\n3. show");
        printf("\n4. exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Show();
            break;
        case 4:
            exit(0);    
        default :
            printf("Invalid Choice");
    }
    }
}

void Push()
{
    int item;
    if(!(top==cap-1))
    {
        printf("\nEnter element:");
        scanf("%d",&item);
        top++;
        stack[top]=item;
    }
    else
    {
        printf("\nStack overflow\n");
    }
}
void Pop()
{
    int item;
    if(!(top==-1))
    {
        item=stack[top];
        top--;
        printf("\nPopped element is %d\n",item);
    }
    else
    {
        printf("\nStack underflow");
    }
}
void Show()
{
    int i;
    if(!(top==-1))
    {
        printf("Stack Elements:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    else
    {
        printf("\nStack underflow\n");
    }
}