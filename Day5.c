// Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

// Input:
// - First line: integer p (number of entries in server log 1)
// - Second line: p sorted integers representing arrival times from server 1
// - Third line: integer q (number of entries in server log 2)
// - Fourth line: q sorted integers representing arrival times from server 2)

// Output:
// - Print a single line containing all arrival times in chronological order, separated by spaces

// Example:
// Input:
// 5
// 10 20 30 50 70
// 4
// 15 25 40 60

// Output:
// 10 15 20 25 30 40 50 60 70

// Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed

#include<stdio.h>
int main(){
    int p,q; // entries in server log 1 and 2 
    int arrp[101];
    int arrq[101];
    int result[202];
    printf("Enter the no. of entries in server log 1 : ");
    scanf("%d",&p);
      printf("Enter the entries in server log 1 : ");
      for(int i = 0;i<p;i++){
        scanf("%d",&arrp[i]);
     }

    printf("Enter the no. of entries in server log 2 : ");
    scanf("%d",&q);
      printf("Enter the entries in server log 2 : ");
      for(int i = 0;i<q;i++){
        scanf("%d",&arrq[i]);}

    int i = 0, j = 0, k = 0;
    while (i < p && j < q) {
        if (arrp[i] <= arrq[j]) {
            result[k] = arrp[i];
            i++;
            k++;
        } else {
            result[k] = arrq[j];
            k++;
            j++;
        }
    }
    
    while (i < p) result[k++] = arrp[i++];
    while (j < q) result[k++] = arrq[j++];
    
    for (int i = 0; i < k; i++) {
        printf("%d", result[i]);
        if (i < k - 1) printf(" ");
    }
    printf("\n");
    
    return 0;

}