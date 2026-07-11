// Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.

// Input:
// - Single line: a lowercase string containing only alphabetic characters (no spaces)

// Output:
// - Print the transformed code name after applying the mirror operation

// Example:
// Input:
// hello

// Output:
// olleh

// Explanation: The first character moves to the last position, the second to the second-last, and so on until the entire string is mirrored


#include<stdio.h>
#include<string.h>
int main(){
    char c[101];
    printf("Enter the character input : ");
    scanf("%s",&c);
   int left = 0;
   int right = strlen(c)-1;
   char temp;
   while(left<right){
    temp = c[left];
    c[left]=c[right];
    c[right]= temp;
    left++;
    right--;
   }
   printf("%s",c);
}