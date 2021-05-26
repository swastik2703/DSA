#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL,*last=NULL;

int main()
{
     int choise=1,n,data;
    while(choise!=0)
    {
    printf("enter the choise \n");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1: printf("enter the no of nodes\n");
        scanf("%d",&n);
        create(n);
        break;
        
        case 2: display();
        break;
        
        default:printf("enter the other choise \n");
    }
    }
}

void create(int n)
{
    struct node *newnode;
    if(n>=1)
    {
        head=(struct node *)malloc(sizeof(struct node ));
        printf("enter the data of first node :");
        scanf("%d",&head->data);
        head->prev=NULL;
        head->next=NULL;
        last=head;
    int i;
    for(i=2;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data of %d node :",i);
        scanf("%d",&newnode->data);
        newnode->prev=last;
        newnode->next=NULL;
        last->next=newnode;
        last=newnode;
    }
    }
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty \n");
    }
    else
    {
        temp=head;
        printf("the data in list is\n");
        while(temp!=NULL)
        {
            printf("the data is %d\n",temp->data);
            temp=temp->next;
        }
    }
}