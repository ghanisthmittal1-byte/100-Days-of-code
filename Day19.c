// Problem: Given an array of integers, find two elements whose sum is closest to zero.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the pair of elements whose sum is closest to zero

// Example:
// Input:
// 5
// 1 60 -10 70 -80

// Output:
// -10 1

// Explanation: Among all possible pairs, the sum of -10 and 1 is -9,
//  which is the closest to zero compared to other pairs.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("ENter size of array: ");
    scanf("%d",&n);
  int   arr[n];
        printf("Enter elements of array: ");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

    // sorting 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;
            }
        }
    }

    int left=0;
    int right = n-1;
    int min = 100000000;
    int a, b;

    while(left<right){
        int sum = arr[left] + arr[right]; //1 60 -10 70 -80 -> -80 -10 1 60 70 -> sum -> -10

        if(abs(sum)<abs(min)){ 
          min  = sum; // min -> -10
            a= arr[left]; // a-> -80
            b= arr[right];// b-> 70
        }
        if(sum<0)
           left++;
        else
           right--;
    }

    printf("%d %d", a ,b);



}
