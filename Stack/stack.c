#include <stdio.h>

int stack[5]; // Stack ka size 5 hai
int top = -1;  // Shuru me stack khaali hai

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

int main() {
    push(10);
    push(20);
    push(30);
    
    peek(); // 30 dikhayega
    
    pop();  // 30 nikal dega
    pop();  // 20 nikal dega
    
    peek(); // Ab 10 dikhayega
    
    return 0;
}
