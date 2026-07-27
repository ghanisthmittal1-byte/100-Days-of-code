// Problem: Delete First Occurrence of a Key - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers
// - Third line: integer key

// Output:
// - Print the linked list elements after deletion, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 30

// Output:
// 10 20 40 50

// Explanation:
// Traverse list, find first node with key, remove it by adjusting previous node's next pointer.

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

struct node * temp = NULL;
struct node * head = NULL;
struct node * ptr = NULL;

int main(){
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter the data:");
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
int k;
printf("Enter the number you want to remove: ");
scanf("%d",&k);

struct node * curr=head;
struct node * prev=NULL;
while(curr!=NULL){
    if(curr->data==k){
        if(prev==NULL){
            head = curr->next;
        }
        else{
            prev->next = curr->next;

        }
        free(curr);
        break;
    }
    prev=curr;
    curr=curr->next;
}
temp = head;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}



}