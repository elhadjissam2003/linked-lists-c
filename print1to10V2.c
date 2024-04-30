// print 1 to 10 wit linked list :
#include <stdio.h>
#include <stdlib.h>
 struct noeud{
     int valeur;
     struct noeud *suiv;
    
};

int main() {
    typedef struct noeud *noeud;
    noeud creelist(int n){
        int i;
        noeud tete=NULL,dernier=NULL,nouveau=NULL;
        tete=(noeud)malloc(sizeof(struct noeud));
        tete->valeur=1;
        tete->suiv=NULL;
        dernier=tete;
        
         i=2;
         while(i<=n){
             nouveau=(noeud)malloc(sizeof(struct noeud));
             nouveau->valeur=i;
             nouveau->suiv=NULL;
             dernier->suiv=nouveau;
             dernier=nouveau;
             
             i++;
         }
             return tete;
         
         }
    noeud temp=NULL;
    temp=creelist(10);
    while(temp!=NULL){
        printf("%d ",temp->valeur);
        temp=temp->suiv;
    }
    
    

    return 0;
}
