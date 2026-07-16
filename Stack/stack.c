#include <stdio.h>

int stack[5]; // Stack ka size 5 hai
int top = -1; // Shuru me stack khaali hai

// Stack me value daalne ke liye
void push(int value) {
    if (top == 4) {
        printf("Stack Full hai!\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d push kiya\n", value);
    }
}

// Stack se value nikalne ke liye
void pop() {
    if (top == -1) {
        printf("Stack Khaali hai!\n");
    } else {
        printf("%d pop kiya\n", stack[top]);
        top--;
    }
}

// Sabse upar ki value dekhne ke liye
void peek() {
    if (top == -1) {
        printf("Stack Khaali hai!\n");
    } else {
        printf("Top par hai: %d\n", stack[top]);
    }
}

// Stack ki saari values dikhane ke liye
void display() {
    if (top == -1) {
        printf("Stack Khaali hai!\n");
    } else {
        printf("Stack Elements: ");

        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }

        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();

    display();

    pop();

    display();

    peek();

    return 0;
}
