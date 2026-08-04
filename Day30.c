// Problem: Polynomial Using Linked List - 
// Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n (number of terms)
// - Next n lines: two integers (coefficient and exponent)

// Output:
// - Print polynomial in standard form, e.g., 10x^4 + 20x^3 + 30x^2 + 40x + 50

// Example:
// Input:
// 5
// 10 4
// 20 3
// 30 2
// 40 1
// 50 0

// Output:
// 10x^4 + 20x^3 + 30x^2 + 40x + 50

// Explanation:
// Each node stores coefficient and exponent. 
// Traverse nodes to print polynomial in decreasing exponent order.

#include<stdio.h>
#include<stdlib.h>

struct node{
    int coeff;
    int exp;
    struct node * next;
};

struct node * head=NULL, *temp= NULL ,*ptr,*current;
int main(){
    int n, coeff, exp;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d",&coeff,&exp);
        ptr=(struct node *)malloc(sizeof(struct node));
        ptr->coeff=coeff;
        ptr->exp=exp;
        ptr->next=NULL;
        if(head==NULL){
            head=ptr;
            temp = ptr;
        }
        else{
            temp->next=ptr;
            temp=ptr;
        }

    }

    current=head;
    int first=1;
    while(current!=NULL){
        if(!first && current->coeff>0){
            printf("+");
        }
        else if(current->coeff<0){
            printf("-");
        }
        int abscoeff = abs(current->coeff);
        if(current->exp==0){
            printf("%d",abscoeff);
        }
        else if(current->exp== 1){
            printf("%dx",abscoeff);
        }
        else{
            printf("%dx^%d",abscoeff,current->exp);
        }
        first=0;
        current=current->next;
    }
    printf("\n");
}

