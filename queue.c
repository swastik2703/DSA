#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
void delete();
int front=-1,rear=-1;
int queue[5];
int main()
{
    int n,choise;
    printf("enter the size \n");
    scanf("%d",&n);
    while(1)
    {
        printf("enter the choise \n");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1: insert(n);
            break;
            
            case 2: display();
            break;
            
            case 3: delete();
            break;
        }
    }
}

void insert(int n)
{
    int data;
    printf("enter the data \n");
    scanf("%d",&data);
    if(rear==n-1)
    {
        printf("overflow\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[front]=data;
    }
    else
    {
        rear++;
        queue[rear]=data;
    }
}

void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("queue empty\n");
    }
    else
    {
        for(i=front;i<rear+1;i++)
        {
            printf("the elements are %d\n",queue[i]);
        }
    }
}

void delete()
{
    if(front==-1 && rear==-1)
    {
        printf("queue empty");
    }
    else
    {
        printf("the deleted element is %d\n",queue[front]);
        front++;
    }
}
