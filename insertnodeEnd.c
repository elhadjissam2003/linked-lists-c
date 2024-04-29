#include <stdio.h>
#include <stdlib.h>
  struct node {
      int data;
      struct node *next;
      
  };
  
int main() {
    int count=0;
    typedef struct node node;
    node *head=NULL;
    
    head=malloc(sizeof(node));
    head->data=1;
    head->next=NULL;
    node *temp1=NULL;
    temp1=malloc(sizeof(node));
    temp1->data=2;
    temp1->next=NULL;
    head->next=temp1;
    temp1=malloc(sizeof(node));
    temp1->data=3;
    temp1->next=NULL;
    head->next->next=temp1;
    temp1=malloc(sizeof(node));
    temp1->data=4;
    temp1->next=NULL;
    head->next->next->next=temp1;
    temp1=malloc(sizeof(node));
    temp1->data=5;
    temp1->next=NULL;
    head->next->next->next->next=temp1;
    // printf("%d\n",head->data);
    // printf("%d\n",head->next->data);
    // printf("%d\n",head->next->next->data);
    // printf("%d\n",head->next->next->next->data);
    // printf("%d\n",head->next->next->next->next->data);
    
    

void insertNodeEnd(node *head,int data){
    node *ptr,*temp;
    ptr=head;
    temp=malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
   
}
insertNodeEnd(head,6);
node *ptr=NULL;
ptr=head;
while(ptr!=NULL){
    
    printf("%d ",ptr->data);
    ptr=ptr->next;
}


    

    return 0;
}
