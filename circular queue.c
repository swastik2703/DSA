#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
#define n 5
int f=-1,r=-1;
int queue[n];

int main()
{
    int choise;
    while(1)
    {
        printf("enter the choise \n");
        scanf("%d",&choise);
        switch(choise)
        {
            case 1: insert();
            break;
            
            case 2: display();
            break;
        }
    }
}

void insert()
{
    int data;
    printf("enter the data in queue\n");
    scanf("%d",&data);
    
    if(f==-1 && r==-1)
   {
       f=r=0;
       queue[r]=data;
   }
   else if(((r+1)%n)==f)
   {
       printf("full\n");
   }
   else
   {
       r=(r+1)%n;
       queue[r]=data;
   }
}

void display()
{
    int i=f;
    if(f==-1 && r==-1)
    {
        printf("empty\n");
    }
    else
    {
        printf("the queue is \n");
        while(i!=r)
        {
           printf("%d\n",queue[i]);
            i=(i+1)%n;
        }
    }
}
