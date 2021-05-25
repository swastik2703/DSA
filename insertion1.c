#include<stdlib.h>
#include<stdio.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_at_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
int main()
{
    int choise;
    while(1)
    {
        printf("enter the choises \n");
        scanf("%d",&choise);
        switch (choise)
        {
        case 1:create();
            break;
       case 2:display();
            break;
       case 3:insert_begin();
            break;
       case 4:insert_end();
            break;
       case 5:insert_at_pos();
            break;
       case 6:delete_begin();
            break;
       case 7:delete_end();
            break;
       case 8:delete_pos();
            break;

            default:printf("enter any other choise \n");
            break;
        }
    }    
}

void create()
{
    struct node *temp,*ptr;          //declaring variables for nodes
    temp=(struct node*)malloc(sizeof(struct node));      //allocating memory 
    printf("enter the data of node \n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)    //initial condition
    {
        start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        } 
        ptr->next=temp;

    }

}

void display()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        ptr=start;
        printf("the listed elements are \n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
        }
    } 
    
}

void insert_begin()
{
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the data of new node \n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;

    }
}

void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        // if(temp==NULL)
        // {
        //         printf("nOut of Memory Space:");
        //         return;
        // }
        printf("\nEnter the data value for the node:" );
        scanf("%d",&temp->data );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}

void insert_at_pos()
{
    struct node *temp,*ptr;
    int index;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter the data need to insert in between\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    printf("enter the index where the data to be added\n");
    scanf("%d",&index);
    if(index==0)
    {
        temp->next=start;
        start=temp;
    }
    else
    {
        ptr=start;
        int i=1;
        while(i<index-1)
        {
            ptr=ptr->next;
            i++;
        }
         temp->next=ptr->next;
            ptr->next=temp;

    }

}

void delete_begin()
{
    struct node  *ptr;
    if(start==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        ptr=start;
        start=start->next;
        free(ptr);
    }
}

void delete_end()
{
    struct node *ptr,*temp;
    ptr=start;
    while(ptr->next!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    temp->next=NULL;
     free(ptr);
}

void delete_pos()
{
    struct node *ptr,*temp;
    int pos,i=1;
    printf("enter the position \n");
    scanf("%d",&pos);
    ptr=start;
    while(i<pos)
    {
        temp=ptr;
        ptr=ptr->next;
        i++;
    }
    temp->next=ptr->next;
    ptr->next=NULL;
    free(ptr);
}