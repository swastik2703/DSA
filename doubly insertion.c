#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void reverse();
void insert_begin();
void insert_end();
void insert_pos();
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
        
        case 3: reverse();
        break;
        
        case 4: insert_begin();
        break;
        
        case 5: insert_end();
        break;
        
        case 6: insert_pos();
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

void reverse()
{
    struct node *ptr,*temp;
    ptr=head;
    while(ptr!=NULL)
    {
        temp=ptr->next;
        ptr->next=ptr->prev;
        ptr->prev=temp;
        ptr=temp;
    }
    temp=head;
    head=last;
    last=temp;
}

void insert_begin()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));

    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
        temp->prev=NULL;
    }
    else
    {
    printf("enter the node \n");
    scanf("%d",&temp->data);
    temp->next=head;
    temp->prev=temp;
    temp->prev=NULL;
    head=temp;
    }
}

void insert_end()
{
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        printf("enter the node to be insert at end\n");
        scanf("%d",&temp->data);
        temp->next=NULL;
        temp->prev=NULL;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        temp->prev=ptr;
        ptr->next=temp;
        temp->next=NULL;
    }
}

void insert_pos()
{
    struct node *ptr,*temp;
    int index,i=1;
    temp=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        ptr=head;
    }
    else
    {
        ptr=head;
        printf("enter the data to be inserted at mid \n");
        scanf("%d",&temp->data);
        temp->next=NULL;
        temp->prev=NULL;
        printf("enter the index where to be inserted \n");
        scanf("%d",&index);
        while(i<index-1)
        {
            ptr=ptr->next;
            i++;
        }
        temp->next=ptr->next;
        ptr->next=temp;
        temp->prev=ptr;
        ptr->next->prev=temp;
    }
}
