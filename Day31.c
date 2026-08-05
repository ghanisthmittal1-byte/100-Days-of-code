// Problem: Implement a stack data structure using an array with the following operations: push, pop, and display.

// Input:
// - First line: integer n (number of operations)
// - Next n lines: operation type and value (if applicable)
//   - 1 value: push value
//   - 2: pop
//   - 3: display

// Output:
// - For display: print stack elements from top to bottom
// - For pop: print popped element or 'Stack Underflow'

// Example:
// Input:
// 5
// 1 10
// 1 20
// 3
// 2
// 3

// Output:
// 20 10
// 20
// 10

#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int stack[MAX];
int Top = -1;
void push();
void pop();
void traverse();

int main(){
    int choice;
    int n;
    int value;
    printf("ENter value of n:");
    scanf("%d",&n);
    printf("1. push,2. Pop, 3. Traverse , 4. exit");
    for(int i=0;i<n;i++){
        printf("Enter your choice:");
        scanf("%d",&choice);
        
        if(choice ==1){
            push(value);
        }
        else if(choice ==2){
            pop();
        }
        else if(choice == 3){
            traverse();
        }

    }
}

void push(int n){
    
    printf("ENter data:");
    scanf("%d",&n);
    if(Top==MAX-1){
        printf("overlow");
    }
    else{
        Top=Top+1;
        stack[Top]= n;
    }
}
void pop(){
    if(Top==-1){
        printf("underflow");

    }
    else{
        printf("%d",stack[Top]);
        Top = Top -1;
    }
}

void traverse(){
    if(Top==-1){
        printf("Underflow");
    }
    else{
        for(int i=Top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
