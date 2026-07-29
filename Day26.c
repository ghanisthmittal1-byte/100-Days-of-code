// Problem: Doubly Linked List Insertion and Traversal - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the linked list elements in forward order, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

// Explanation:
// Each node has data, next, prev. Insert nodes sequentially, traverse from head using next pointer.

#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* next;
    int data;
    struct  node* prev;
};

struct node * head =NULL;
struct node * temp =NULL;
struct node * ptr =NULL;

int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        ptr=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        ptr->prev=NULL;
        if(head==NULL){
            head = ptr;
        }
        else{ temp = head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            ptr->prev=temp;
            temp->next=ptr;
        }
    }

    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}