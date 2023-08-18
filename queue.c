#include<stdio.h>  
#include<stdlib.h>
// Circular queue implementation
struct arrayqueue
{
    int front, rear;
    int capacity;
    int *array;
};
struct arrayqueue *Q;
struct arrayqueue* createqueue(int cap)     // Function to create queue
{
    Q=(struct arrayqueue*)malloc(sizeof(struct arrayqueue));
    Q->capacity=cap;
    Q->front=-1;
    Q->rear=-1;
    Q->array=(int*)malloc(sizeof(int)*Q->capacity);
}

int isempty()         // Function to check if queue is empty or not
{
    return(Q->front==-1);
}

int isfull()          // Function to check if queue is full or not
{
    return((Q->rear + 1)%Q->capacity==Q->front);
}

void enqueue()       // Function to enter element in queue
{
    if(!(isfull()))
    {
        int data;
        printf("\nEnter element for queue:\n");
        scanf("%d",&data);
        Q->rear=(Q->rear+1)%Q->capacity;
        Q->array[Q->rear]=data;
        if(Q->front==-1)
        {
            Q->front=Q->rear;
        }      
    }
    else
    {
        printf("\nOverflow\n");
    }
}

int dequeue()     // Function to delete element from queue
{
    int data;
    if(!(isempty()))
    {
        data=Q->array[Q->front];
        if(Q->front==Q->rear)
        {
            Q->front=Q->rear=-1;
        }
        else{
            Q->front=(Q->front + 1)%Q->capacity;
        }
    }
    else{
        return -1;
    }
    return data;
}
void viewqueue()     // Function to view elements of queue
{
    int i, j;
    i=Q->front;
    j=Q->rear;
    if(!isempty())
    {
        if(Q->front==Q->rear)
        {
            printf("%d",Q->array[Q->front]);
        }
        else
        {    while(i!=j)
            {
                printf("%d ",Q->array[i]);
                i=(i + 1)%Q->capacity;
            }
            printf("%d",Q->array[Q->rear]);
        }
    }
    else{
        printf("Queue is empty\n");
    }
    
}
// void queuesize()   // Function to find no. of elements
// {
//     if(Q->front==-1)
//     {
//         printf("Queue is empty");
//     }
//     else{
//     printf("\nElements in Queue right now are %d\n",(Q->capacity - Q->front + Q->rear +1)%Q->capacity);
//     }
// }

void deletequeue()     // Function to Delete whole queue Structure
{
    if(Q)
    {
        if(Q->array)
        {
            free(Q->array);
        }
        free(Q);
    }
}

void main()
{
    int cap, data, choice, d;
    printf("Enter the capacity of queue you want to create:\n");
    scanf("%d",&cap);
    createqueue(cap);
    while(1)
    {
        printf("\n1. Enter element in queue");
        printf("\n2. Delete element in queue");
        printf("\n3. View queue");
        printf("\n4. Exit");
        printf("\nEnter your choice:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
                enqueue();
                break;
        case 2:
               d=dequeue();
               if(d==-1)
               {
                printf("underflow");
               }
               else{
                printf("\nDeleted element is %d\n",d);
               } 
               break;
        case 3:
                viewqueue();
                break;
        case 4: exit(0);        
        default:
                printf("\nInvalid Choice\n");
                break;
        }
    }
}