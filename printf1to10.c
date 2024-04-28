#include <stdio.h>
#include <stdlib.h>
  struct node {
     int data;
     struct node *next;
     
 };

int main() {
    typedef struct node node ;
    node *head=NULL;
    head=(node * )(malloc)(sizeof(node));
   
    head->data=1;
    head->next=NULL;
    node *temp1=NULL;
    temp1=malloc(sizeof(node));
    temp1->data=2;
    temp1->next=NULL;
    head->next=temp1;
    
    node *temp2=malloc(sizeof(node));
    temp2->data=3;
    temp2->next=NULL;
    temp1->next=temp2;
    
    node *temp3=malloc(sizeof(node));
    temp3->data=4;
    temp3->next=NULL;
    temp2->next=temp3;
    node *temp4=malloc(sizeof(node));
    temp4->data=5;
    temp4->next=NULL;
    temp3->next=temp4;
    node *temp5=malloc(sizeof(node));
    temp5->data=6;
    temp5->next=NULL;
    temp4->next=temp5;
    node *temp6=malloc(sizeof(node));
    temp6->data=7;
    temp6->next=NULL;
    temp5->next=temp6;
    node *temp7=malloc(sizeof(node));
    temp7->data=8;
    temp7->next=NULL;
    temp6->next=temp7;
    node *temp8=malloc(sizeof(node));
    temp8->data=9;
    temp8->next=NULL;
    temp7->next=temp8;
    node *temp9=malloc(sizeof(node));
    temp9->data=10;
    temp9->next=NULL;
    temp8->next=temp9;
    
    
    printf("%d\n",head->data);
    printf("%d\n",head->next->data);
    printf("%d\n",head->next->next->data);
    printf("%d\n",head->next->next->next->data);
    printf("%d\n",head->next->next->next->next->data);
    printf("%d\n",head->next->next->next->next->next->data);
    printf("%d\n",head->next->next->next->next->next->next->data);
    printf("%d\n",head->next->next->next->next->next->next->next->data);
     printf("%d\n",head->next->next->next->next->next->next->next->next->data);
     printf("%d\n",head->next->next->next->next->next->next->next->next->next->data);

    
    
    
    
    

    return 0;
}
