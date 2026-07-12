// Problem: Read a string and check if it is a palindrome using two-pointer comparison.

// Input:
// - Single line: string s

// Output:
// - Print YES if palindrome, otherwise NO

// Example:
// Input:
// level

// Output:
// YES

// Explanation: String reads same forwards and backwards


#include<stdio.h>
#include<string.h>
int main(){
    char c[1000];
    scanf("%s",c);
    int left =0;
    int right=strlen(c)-1;
char x[1000] ;
strcpy(x,c);
    while(left<right){
        char temp = c[left];
        c[left]=c[right];
        c[right]=temp;
        left++;
        right--;
    }
    if(strcmp(x,c)==0) printf("Is palindrome");
    else printf("No not a palindrome");
}