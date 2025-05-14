#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

void linkedListTraversal(struct Node *ptr){
    while(ptr != NULL){
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}


int main(){
    struct Node* head;
    head = (struct Node*) malloc(sizeof(struct Node));

    struct Node* second;
    second = (struct Node*) malloc(sizeof (struct Node));
    
    struct Node* third;
    third = (struct Node*) malloc(sizeof (struct Node));


    head -> data = 4;
    head -> next = second;

    second -> data = 5;
    second -> next = third;
    
    third -> data = 99;
    third -> next = NULL;


    linkedListTraversal(head);


return 0;

};