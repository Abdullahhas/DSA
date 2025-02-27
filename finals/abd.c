			#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};

struct node *list = NULL;
struct node *P = NULL;
struct node *Q = NULL;

void display(){
    struct node *display = list;
    printf("\n");
    while(display){
        printf("[%d] --->",display->info);
        display = display->next;
    }
    printf("NULL\n");
}

void InsertionAtE(int value){
    if(list == NULL){
        P = (struct node*)malloc(sizeof(struct node));
        P->info = value;
        P->next = NULL;
        list = P;
    }
    else{
        Q = list;
        while(Q->next!=NULL){
            Q = Q->next;
        }
        P = (struct node*)malloc(sizeof(struct node));
        P->info = value;
        Q->next = P;
        P->next = NULL;
    }
}

void RemoveDuplicate(){
    Q = list;
    for(struct node *i=list;i!=NULL;i=i->next){
        for(struct node *j=i->next;j!=NULL;j=j->next){
            if(i->info == j->info){
                Q->next = j->next;
                free(j);
                j = Q;
            }
            Q = j;
        }
    }
}

int main(){
    while(1){
        int choice,value;
        printf("\n1) :Insertion at the End \n2) : Remove Duplicate");
        printf("\nEnter choice :");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter value :");
            scanf("%d",&value);
            InsertionAtE(value);
            display();
            break;
        case 2:
            RemoveDuplicate();
            display();
            break;
        } 
    }
}