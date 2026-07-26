// Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print the merged linked list elements, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 4
// 15 25 35 45

// Output:
// 10 15 20 25 30 35 40 45 50

// Explanation:
// Compare nodes of both lists, append smaller to result, continue until all nodes are merged.



#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};



struct node * temp=NULL;
struct node * head=NULL;
struct node * temp2=NULL;
struct node * head2 =NULL;
struct node * ptr=NULL;

int main(){
    int n;
    printf("Enter number of elements for 1st  : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        ptr=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;

        if(head ==NULL){
            head = ptr;
            temp=ptr;
        }
        else{
            temp->next=ptr;
            temp=ptr;
        }
    }

    int m;
  
    printf("Enter number of elements for 2nd  : ");
      scanf("%d",&m);
       for(int i=0;i<m;i++){
        ptr=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;

        if(head2 ==NULL){
            head2 = ptr;
            temp2=ptr;
        }
        else{
            temp2->next=ptr;
            temp2=ptr;
        }
    }
    struct node dummy;
    struct node *tail = &dummy;
    dummy.next = NULL;

    while(head != NULL && head2 != NULL){
        if(head->data < head2->data){
            tail->next = head;
            head = head->next;
        }
        else{
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }

    if(head != NULL)
        tail->next = head;
    else
        tail->next = head2;

    // Print merged linked list
    printf("Merged Linked List: ");

    ptr = dummy.next;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    return 0;

}
