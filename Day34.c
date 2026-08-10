// Problem: Evaluate Postfix Expression - Implement using linked list with dynamic memory allocation.

// Input:
// - Postfix expression with operands and operators

// Output:
// - Print the integer result

// Example:
// Input:
// 2 3 1 * + 9 -

// Output:
// -4

// Explanation:
// Use stack to store operands, apply operators by popping operands, push result back.
//  Final stack top is result.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void push(struct Node **top, int value) {
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = value;
    temp->next = *top;
    *top = temp;
}

int pop(struct Node **top) {
    int value;
    struct Node *temp;

    value = (*top)->data;
    temp = *top;
    *top = (*top)->next;

    free(temp);

    return value;
}

int applyoperator(int a, int b, char op) {
    if (op == '+')
        return a + b;
    if (op == '-')
        return a - b;
    if (op == '*')
        return a * b;
    if (op == '/')
        return a / b;

    return 0;
}

int evaluatepostfix(char exp[]) {
    struct Node *top = NULL;

    for (int i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];

        if (ch >= '0' && ch <= '9') {
            push(&top, ch - '0');
        }
        else {
            int b = pop(&top);
            int a = pop(&top);

            int result = applyoperator(a, b, ch);

            push(&top, result);
        }
    }

    return pop(&top);
}

int main() {
    char exp[] = "231*+9-";

    int result = evaluatepostfix(exp);

    printf("Result: %d", result);

    return 0;
}