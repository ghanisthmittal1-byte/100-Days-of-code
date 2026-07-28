// Problem: Count Occurrences of an Element in Linked List - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n (number of nodes)
// - Second line: n space-separated integers (linked list elements)
// - Third line: integer key (element to be counted)

// Output:
// - Print the number of times the key appears in the linked list

// Example:
// Input:
// 6
// 10 20 30 20 40 20
// 20

// Output:
// 3

// Explanation:
// Traverse the linked list from head to end. Each time a node's data matches the given key, 
// increment a counter. After traversal, print the final count.


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
    printf("Enter the no. of elements of linked list:");
    scanf("%d",&n);
    printf("ENter elements of linked list");
    for(int i=0;i<n;i++){
        ptr=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;

        if(head==NULL){
            head = ptr;
            temp=ptr;
        }
        else{
            temp->next=ptr;
            temp=ptr;
            
        }
    }

    int count =0;
   

    int k;
    printf("Enter the number you want to search:");
    scanf("%d",&k);
    temp=head;
    while(temp!=NULL){
        if(temp->data==k){
            count++;
        }
              
        temp=temp->next;
    }
    printf("Number %d occur %d times",k,count);
}