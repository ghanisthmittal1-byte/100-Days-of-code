// Problem: Implement push and pop operations on a stack and verify stack operations.

// Input:
// - First line: integer n
// - Second line: n integers to push
// - Third line: integer m (number of pops)

// Output:
// - Print remaining stack elements from top to bottom

// Example:
// Input:
// 5
// 10 20 30 40 50
// 2

// Output:
// 30 20 10

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int stack[MAX];
int top=-1;
void push(int n){
    if(top<MAX-1){
        top++;
        stack[top]=n;
        
    }
}
void pop(){
    if(top>0){
        
        top--;
    }
}

int main(){
    int k;
    int l;
    int n;
    scanf("%d",&k);
    

    for(int i=0;i<k;i++){
        scanf("%d",&n);
        push(n);
    }
scanf("%d",&l);
    for(int i=0;i<l;i++){
        pop();

    }

    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);

    }
    printf("\n");
}
