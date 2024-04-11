#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head,*temp;

void insert (int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node*));
    newnode ->data = data;
    if(head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else {
        temp = head;
        while (temp->next!=head)
        {
            temp = temp->next;
        }
        newnode->next = head;
        temp->next = newnode;
        head = newnode;
    }
}

void display ()
{
    temp = head;
    while (temp->next!=head)
    {
        printf ("%d\t",temp->data);
        temp = temp->next;
    }
    printf ("%d\t",temp->data);
}

int main ()
{
    insert(1);
    insert(2);
    insert(3);
    display();
}