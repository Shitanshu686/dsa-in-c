#include <stdio.h>
#include <stdlib.h>

struct queue {
    int size;
    int f;
    int r;
    int* arr;
};

// Function to check if the queue is full
int isFull(struct queue *q) {
    if (q->r == q->size - 1) {
        return 1;
    }
    return 0;
}

// Function to check if the queue is empty
int isEmpty(struct queue *q) {
    if (q->f == q->r) {
        return 1;
    }
    return 0;
}

// Function to insert an element into the queue (Enqueue)
void enqueue(struct queue *q, int val) {
    if (isFull(q)) {
        printf("This Queue is Full (Overflow)!\n");
    } else {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqueued element: %d\n", val);
    }
}

// Function to remove an element from the queue (Dequeue)
int dequeue(struct queue *q) {
    int a = -1;
    if (isEmpty(q)) {
        printf("This Queue is Empty (Underflow)!\n");
    } else {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main() {
    struct queue q;
    q.size = 5;
    q.f = q.r = -1;
    q.arr = (int*) malloc(q.size * sizeof(int));

    // Enqueueing elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 18);
    enqueue(&q, 21);

    printf("\n");

    // Dequeueing elements
    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Dequeued element: %d\n", dequeue(&q));

    // Check final status
    if (isEmpty(&q)) {
        printf("Queue is empty now.\n");
    } else {
        printf("Queue still has elements.\n");
    }

    // Free the allocated memory
    free(q.arr);

    return 0;
}
