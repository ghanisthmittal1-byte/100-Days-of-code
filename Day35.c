// Problem: Queue Using Array - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n (number of elements)
// - Second line: n space-separated integers

// Output:
// - Print queue elements from front to rear, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50

// Explanation:
// Use array and front/rear pointers. Enqueue inserts at rear, dequeue removes from front
// . Display from front to rear.

#include<stdio.h>

#define MAX 100
int queue[MAX];
int rear=-1;
int front=-1;

void enqueue(int data){
    if(rear ==MAX-1){
        printf("Overflow");
    }
    else{
        if(front==-1){
            front=0;
        }
        rear++;
        queue[rear]=data;
    }
}

void dequeue(){
    if(front==-1 || front>rear){
        printf("UNderflow");
    }
    else{
        front=front+1;
        if(front>rear){
            front=-1;
            rear=-1;
        }
    }
}

void Traverse(){
   
    if(front==-1){
        printf("Underflow");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        }
    }


int main(){
    int n;
    int data;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        enqueue(data);
    }
    Traverse();
    return 0;
}