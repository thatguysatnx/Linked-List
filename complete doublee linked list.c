#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node *p,*head;
void  insert_at_beg(int data){
    struct node *newnode= (struct node*)malloc(sizeof(struct node*));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    newnode->prev=NULL;
    
}

void  insert_at_end(int data){
    struct node *newnode= (struct node*)malloc(sizeof(struct node*));
    newnode->data=data;
    if(head==NULL){
        head=newnode;
        newnode->next=head;
        newnode->prev=NULL;
        
    }
    else{
        p=head;
        while(p->next!=NULL){
            p=p->next;
        }
    }
    p->next=newnode;
    newnode->prev=p;
}  
void  insert_at_pos(int data,int pos){
    struct node *newnode= (struct node*)malloc(sizeof(struct node*));
    if(head==NULL){
        head=newnode;
        newnode->next=head;
        newnode->prev=NULL;
    }
    else{
        p=head;
        int c=0;
        while(p->next!=NULL){
          c++;  
        
        if(c==pos-1)
        
            
            break;
           
        
         p=p->next;
    }
    newnode->next=p->next;
    p->next=newnode;
    newnode->data = data;
        
    }
}
void del(){
    head=head->next;
    head->prev=NULL;
}

void display(){
p=head;
while (p!=NULL){
printf("%d ",p->data);
p = p->next;
}
}
int main()
{
    insert_at_beg(1);
    insert_at_beg(3);
    insert_at_beg(5);
    insert_at_end(10);
    insert_at_end(12);
    insert_at_end(15);
    insert_at_pos(30,5);
    del();
    display();
}

