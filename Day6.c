// Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (sorted array)

// Output:
// - Print unique elements only, space-separated

// Example:
// Input:
// 6
// 1 1 2 2 3 3

// Output:
// 1 2 3

// Explanation: Keep first occurrence of each e1 lement: 1, 2, 3

#include<stdio.h>
int main(){
    int n;
    int arr[101];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     int i1 = 0;
        for(int j =1;j<n;j++){
            if(arr[j]!=arr[i1]){
                i1++;
                arr[i1]=arr[j];


            
        }
    }
    for(int i =0;i<=i1;i++){
        printf("%d",arr[i]);
        if(i<i1) printf(" ");
    }

}