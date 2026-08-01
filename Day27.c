// Problem: Find Intersection Point of Two Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print value of intersection node or 'No Intersection'

// Example:
// Input:
// 5
// 10 20 30 40 50
// 4
// 15 25 30 40 50

// Output:
// 30

// Explanation:
// Calculate lengths, advance pointer in longer list, traverse both simultaneously. First common node is intersection.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*  next;

};

struct node * head1 =NULL;
struct node * head2 =NULL;
struct node * temp1 =NULL;
struct node * ptr1 =NULL;
struct node * temp2=NULL;
struct node * ptr2 =NULL;

int main(){
    int n;
    printf("Enter no. of elements of first list:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        ptr1=(struct node *)malloc (sizeof(struct node));
        scanf("%d",&ptr1->data);
        ptr1->next=NULL;
        if(head1==NULL){
            head1 = ptr1;
            temp1=ptr1;
        }
        else{
            temp1->next=ptr1;
            temp1=ptr1;
            
        }
    }
int m;
printf("ENter no. of elements of 2nd array:");
scanf("%d",&m);
    for(int i=0;i<m;i++){
        ptr2=(struct node *)malloc (sizeof(struct node));
        scanf("%d",&ptr2->data);
        ptr2->next=NULL;
        if(head2==NULL){
            head2 = ptr2;
            temp2=ptr2;
        }
        else{
            temp2->next=ptr2;
            temp2=ptr2;
            
        }
    }
temp1=head1;
int found =0;
    while(temp1!=NULL){
        temp2=head2;
        while(temp2!=NULL){
            if(temp1->data==temp2->data){
                printf("%d",temp2->data);
                found=1;
                break;
               
            }
             temp2=temp2->next;
             
        }
        if(found)
        break;
        
        temp1=temp1->next;
        
    }
   
    if(!found){
        printf("No intersection");
    }
   
    

}