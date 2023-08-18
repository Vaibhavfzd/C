#include<stdio.h>
#include<stdlib.h>
struct ArrayStack
{
    int top;
    unsigned capacity;
    int *array;
};
struct ArrayStack *stack;
int cap;
void createstack()//int cap)//function to create stack
{
    printf("\nEnter the size of array: ");
    scanf("%d",&cap);
    stack=malloc(sizeof(struct ArrayStack));
    stack->capacity=cap;
    stack->top=-1;
    stack->array=malloc(sizeof(int)*stack->capacity);
}
int isfull()
{
    if(stack->top==stack->capacity-1)
        return(1);
    else
        return(0);
}
int isempty()
{
    if(stack->top==-1)
        return(1);
    else
        return(0);
}
void Push()//int item)
{
    if(!isfull())
        {
            int item;
            printf("\nEnter a number: ");
            scanf("%d",&item);
            stack->top++;
            stack->array[stack->top]=item;
        }
   else
       printf("\nstack is overflow\n");
}
void Pop()
{
    int t;
    if(!isempty())
    {t=stack->array[stack->top];
    stack->top--;
    //return(t);
    printf("Pop element is %d",t);
    }
    else
    {// return(-1);
    printf("\nstack is empty\n");}
}
void show()
{
    int i;
    if(!isempty())
    {
        for(i=stack->top;i>=0;i--)
        {
            printf("%d ",stack->array[i]);
        }
    }
    else
    printf("\nStack is empty\n");
}
void main()
{
    int item, choice;
    // printf("\nEnter the size of array: ");
    // scanf("%d",&cap);
    createstack();
    while(1)
{
    printf("\n1. push element in stack");
    printf("\n2. Pop the element");
    printf("\n3. show");
    printf("\n4. exit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            // if(stack->top==stack->capacity-1)
            //     printf("stack is overflow");
            // else
            // {printf("\nEnter a number: ");
            // scanf("%d",&item);
            Push();
            break;
        case 2:
            Pop();
            //item=Pop();
            // if(item==-1)
            //     printf("stack is empty");
            // else
            //     printf("Pop element is %d",item);
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);    
        default :
            printf("Invalid Choice");
    }
}
}
