// Problem: Circular Queue Using Array - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n (number of elements to enqueue)
// - Second line: n space-separated integers
// - Third line: integer m (number of dequeue operations)

// Output:
// - Print queue elements from front to rear after operations, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 2

// Output:
// 30 40 50 10 20

// Explanation:
// Use array and front/rear pointers. Rear wraps around to start after reaching array end. 
// Dequeue removes elements from front. Display remaining elements in correct order.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d", &n);

    int *queue = (int *)malloc(n * sizeof(int));

    int front = 0;
    int rear = -1;

    // Enqueue n elements
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        rear = (rear + 1) % n;
        queue[rear] = value;
    }

    // Number of dequeue operations
    scanf("%d", &m);

    // Dequeue m elements
    for (int i = 0; i < m; i++) {
        front = (front + 1) % n;
    }

    // Display remaining elements
    int remaining = n - m;

    for (int i = 0; i < remaining; i++) {
        int index = (front + i) % n;

        if (i > 0)
            printf(" ");

        printf("%d", queue[index]);
    }

    printf("\n");

    free(queue);

    return 0;
}