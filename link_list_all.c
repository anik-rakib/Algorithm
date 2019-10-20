#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

void insert(int x)
{
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->next = NULL;
    if (start == NULL)
    {
        start = new_node;
    }
    else
    {
        new_node->next = start;
        start = new_node;
    }
}

void first(int y)
{
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = y;
    new_node->next = start;
    start = new_node;

}
void second(int y)
{
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = y;
    new_node->next = start->next;
    start->next = new_node;

}
void last_position(int y)
{
    struct node *new_node,*p;
    p=start;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = y;
    new_node->next = NULL;

    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = new_node;

}
void any_position(int x,int data)
{
    int i;
    struct node *new_node,*p;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    p=start;

    if(x==1)
    {
        new_node->next = p;
        p = new_node;
    }
    else
    {
        for(i=1; i<x-1; i++)
        {
            p=p->next;
        }
        new_node->next = p->next;
        p->next = new_node;
    }
}
void based_on_data(int x,int y)
{
    struct node *position;
    position = start;
    while(position != NULL)
    {

        if(x== position->data)
        {
            position->data = y;
        }
        position= position->next;
    }
}
void based_on_position(int x,int data)
{
    int i;
    struct node *change;
    change = start;
    for(i=0; i<x-1; i++)
    {
        change = change->next;
    }
    change->data=data;
}
void delete_data(int x)
{
    struct node *p,*q;
    q= start;
    p= start->next;

    if(q->data == x)
    {
        start=p;
        q->next = NULL;
    }
    else
    {
        while(p->data != x)
        {
            p=p->next;
            q=q->next;
        }
        if(p->data  == NULL)
        {
            q->next = NULL;
            p->next = NULL;
        }
        else
        {
            q->next = p->next ;
            p->next = NULL;
        }
    }
}
void delete_position(int x)
{
    struct node *q,*p;
    int i;
    q= start;
    p= start->next;
    if(x==1)
    {
        start=p;
        q->next = NULL;
    }
    else
    {
        for(i=1; i<x-1; i++)
        {
            p=p->next;
            q=q->next;
        }
        q->next = p->next ;
        p->next = NULL;
    }
}
void display()
{
    while(start != NULL)
    {
        printf("%d  --->\t", start->data);
        start = start->next;
    }
}
int main(void)
{
    int n,i,m, value,value2,p,data1,b ,data2,a,d,j,k;
    printf("How many node do you use ?\n");
    scanf("%d",&n);
    printf("you value assigned %d node\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&value);
        insert(value);
    }

    printf("you add 1st position data\n");
    scanf("%d",&p);
    first(p);

    printf("you add 2nd position data\n");
    scanf("%d",&value2);
    second(value2);

    printf("you add last position data\n");
    scanf("%d",&a);
    last_position(a);

    printf("which position do You want to add a data?\n");
    scanf("%d",&m);
    printf("you add %d position data\n",m);
    scanf("%d",&d);
    any_position(m,d);


    printf("What data do you want to change?\n");
    scanf("%d",&b);

    printf("you input the changed data\n");
    scanf("%d",&data2);
    based_on_data(b,data2);

     printf("which position do you want to change data?\n");
    scanf("%d",&p);
    printf("you input the changed data\n");
    scanf("%d",&data1);
    based_on_position(p,data1);

    printf("What data do you want to delete?\n");
    scanf("%d",&j);
    delete_data(j);

    printf("What position do you want to delete?\n");
    scanf("%d",&k);
    delete_position(k);

    display();

    return 0;
}
