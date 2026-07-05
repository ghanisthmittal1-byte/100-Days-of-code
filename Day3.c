// Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

// Input:
// - First line: integer n (array size)
// - Second line: n space-separated integers
// - Third line: integer k (key to search)

// Output:
// - Line 1: "Found at index i" OR "Not Found"
// Line 2: "Comparisons = c"

// Example:
// Input:
// 5
// 10 20 30 40 50
// 30

// Output:
// Found at index 2
// Comparisons = 3

// Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)

#include<stdio.h>
int main(){
    int n;
    int k;
    int arr[100];
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("ENter values of array separated by space : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("ENter the integer you want to search : ");
    scanf("%d",&k);

    int count=0;

    for(int i=0;i<n;i++){
        count++;
        if(arr[i]==k){
            printf("Found at index %d\n",i);
            break;
        }
        
    }
printf("Comparisons: %d",count);

}