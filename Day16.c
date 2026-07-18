// Problem: Given an array of integers, count the frequency of each distinct element and print the result.

// Input:
// - First line: integer n (size of array)
// - Second line: n integers

// Output:
// - Print each element followed by its frequency in the format element:count

// Example:
// Input:
// 5
// 1 2 2 3 1

// Output:
// 1:2 2:2 3:1

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int freq[n + 1];
     for(int i = 0; i <= n; i++) {
        freq[i] = 0;
    }
    printf("Enter the elements of array : ");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);    
        freq[arr[i]]++;   
    }

    for(int i=0;i<n;i++){
        if(freq[arr[i]]>0){
            printf("%d:%d ", arr[i], freq[arr[i]]);
            freq[arr[i]] = 0; 
        }

    }
    printf("\n");

}