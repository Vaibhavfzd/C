#include<stdio.h>
#include<stdlib.h>
void deletefirstnode();
void insertfirstnode();
void viewlist();
struct node
{
    int info;
    int *prev, *next;
};
struct node *head=NULL;
void insertfirstnode()
{
    struct node *n ;
    n=(struct node *)malloc(sizeof(struct node));
    printf("Enter a number: ");
    scanf("%d",&n->info);
    n->prev=NULL;
    n->next=NULL;
    if(head==NULL)
        head=n;
    else
    {
        head->prev = n;
        n->next = head;
        head=n;
    }
}
void deletefirstnode()
{
    struct node *r;
    if(head==NULL)
        printf("List is empty");
    else
    {
        r=head;
        head = head->next;
        head->prev = NULL;
        free(r);
    }
}
void viewlist()
{
    struct node *t;
    if(head==NULL)
        printf("List is empty");
    else
    {
        t=head;
        while(t!=NULL)
        {
            printf("%d ",t->info);
            t = t->next;
        }
    }
}
int menu()
{
    int ch;
    printf("\n1. insert element in link list");
    printf("\n2. delete element in list");
    printf("\n3. view list");
    printf("\n4. exit");
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
                insertfirstnode();
                break;
            case 2:
                deletefirstnode();
                break;
            case 3:
                viewlist(head);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice");

        }
    }
}
