// Problem: Circular Linked List Creation and Traversal - Implement using linked list with 
// dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the circular linked list elements starting from head, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

// Explanation:
// Last node's next points to head. Traverse from head until returning to head to avoid infinite loop.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;

};

struct node * circular(int n){
    if(n==0) return NULL;

    struct node * head =NULL;
    struct node * temp =NULL;
    struct node * ptr =NULL;

    for(int i=0;i<n;i++){
        ptr=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;

        if(head==NULL){
            head=ptr;
            temp=ptr;
        }
        else{
            temp->next=ptr;
            temp=ptr;
        }
    }
temp->next=head;
return head;
}

void traveres(struct node * head){
    if (head==NULL) return;
    struct node * temp = head;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    } while(temp!=head);
}

int main(){
    int n;
    printf("Enter value of n");
    scanf("%d",&n);

    struct node * head = circular(n);

    traveres(head);
    return 0;
}