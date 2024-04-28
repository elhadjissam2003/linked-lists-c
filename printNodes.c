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
    
    

void printNodes(node *head){
    if(head==NULL){
        printf("Linked lists is empty.");
    }
    node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
printNodes(head);
   
    
    

    return 0;
}
