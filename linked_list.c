#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *head=NULL;     // Global Declaration of head Pointer

struct node* createnode()   // Function to create node
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);
}

void insertnode()           // Function to insert node in list
{
    struct node *temp, *t;
    temp=createnode();
    printf("Enter a number:");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(head==NULL)
       head=temp;
    else
    {
        t=head;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }
}

void deletelastnode()        // Function to delete lastnode from list
{
    struct node *r, *t;
    if(head==NULL)
        printf("\nlist is empty\n");
    else
    {
        t=head;
        while(t->link!=NULL)
        {
            r=t;
            t=t->link;
        }
        r->link=NULL;
        free(t);

    }
}
void deletenode()           //Function to delete first node from list
{
    struct node *r;
    if(head ==NULL)
        printf("List is empty\n");
    else
    {
        r=head;
        head=head->link;
        free(r);
    }
}
void viewlist()             // Function to View list
{
    struct node *t;
    if(head==NULL)
       printf("List is empty\n");
    else
    {
        printf("List:\n");
        t=head;
    while(t!=NULL)
    {
        printf("%d ",t->info);
        t=t->link;
    }
    }
}

int menu()                  // Function to view operation tobe done on in list
{
    int ch;
    printf("\n1. Insert a node");
    printf("\n2.Delete first node");
    printf("\n3.View list");
    printf("\n4.exit");
    printf("\n5.Delete last node\n");
    printf("\nEnter your choice\n");
    scanf("%d",&ch);
    return(ch);
}

void main()
{
    while(1)
    {
        switch(menu())
        {
            case 1:
                insertnode();
                break;
            case 2:
                deletenode();
                break;
            case 3:
                viewlist();
                break;
            case 4:
                exit(0);
                break;
            case 5:
                deletelastnode();
                break;
            default:
                printf("invalid choice");

        }
    }
}


