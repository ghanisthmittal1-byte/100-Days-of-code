// Problem: Rotate Linked List Right by k Places - Implement using linked list with 
// dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers
// - Third line: integer k

// Output:
// - Print the linked list elements after rotation, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 2

// Output:
// 40 50 10 20 30

// Explanation:
// Connect last node to head forming circular list. Traverse to (n-k)th node,
//  set next to NULL, update head to (n-k+1)th node.

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;

};

struct node * head =NULL;
struct node * temp =NULL;
struct node * ptr =NULL;

int main(){
    int n;
    printf("Enter no. of elements of linked list");
    scanf("%d",&n);
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
    temp->next = head;

    int k;
    printf("ENter the number by which you want to rotate list");
    scanf("%d",&k);
    k=k%n;

    if(k==0){
        temp=head;
        while(temp!=NULL){
            printf("%d",temp->data);
            temp = temp->next;
        }
    }

    struct node * start = head;
    for(int i=1;i<n-k;i++){
        start=start->next;
    }
    head=start->next;
    start->next=NULL;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}