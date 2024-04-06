#include <stdio.h>
#include <stdlib.h>

struct node {
    int d;
    struct node *next;
};

struct node *head;

void insert_beg(int d)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->d = d;
    newnode->next = head;
    head = newnode;
}

void insert_end (int d)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node*));
    newnode -> d = d;
    newnode->next = NULL;
    if (head==NULL){
        head = newnode;
    }
    else {
        struct node *temp;
        temp = head;
        while (temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void lin_search (int x){
    struct node *temp  = (struct node*)malloc(sizeof(struct node*));
    temp = head;
    while (temp->next!=NULL){
        if (temp->d == x){
            printf ("Found !");
            return ;
        }
        temp = temp->next;
    }
}


void print ()
{
    struct node *temp  = (struct node*)malloc(sizeof(struct node*));
    temp = head;
    while (temp!=NULL){
        printf ("%d\t",temp->d);
        temp = temp->next;
    }
}


int main ()
{
    int choice , d;
    
    do{
        printf ("\n");
        printf ("1: insert_beg:\n");
        printf("2: exit \n");
 printf("3: insert_end:\n");
        printf ("4: lin_search : \n");
        printf ("5: print:\n");
        printf ("enter the choice :");
        scanf ("%d",&choice);
        
        switch(choice){
            case 1: printf ("Enter the element :");
                    scanf ("%d",&d);
                    insert_beg(d);
                    break;
                    
            case 2: printf ("Exiting program..\n");
                    break;
                    
            case 3: printf ("Enter the element:");
            scanf ("%d",&d);
            insert_end(d);
            break;
            
            
            case 4: printf ("Enter the element you want to search :");
                    scanf ("%d",&d);
                    lin_search(d);
                    break;
                    
                    
            case 5: printf ("Printing the list ... \n");
                    print();
                    break;
                    
            default: printf ("Try again !");
                    break;
                    
        }
    }while (choice!=50);
    free (head);
    return 0;
}