// Problem: Count Nodes in Linked List

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the result

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

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
    int n ;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        ptr = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next = NULL;

        if(head == NULL){
            head = ptr;
            temp=ptr;
        }
        else{
            temp->next=ptr;
            temp=ptr;
        }

    }
int count = 0;
    temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    printf("%d",count);
}
