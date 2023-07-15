#include <stdio.h>
#define MAX_SIZE 10

// Structure to represent a queue
struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

// Function to initialize the queue
void initializeQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* q) {
    if (q->rear == -1)
        return 1;
    else
        return 0;
}

// Function to check if the queue is full
int isFull(struct Queue* q) {
    if (q->rear == MAX_SIZE - 1)
        return 1;
    else
        return 0;
}

// Function to add an element to the queue
void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Overflow!\n");
    } else {
        if (isEmpty(q)) {
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

// Function to remove an element from the queue
void dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Underflow!\n");
    } else {
        printf("Dequeued: %d\n", q->items[q->front]);
        if (q->front == q->rear) {
            q->front = -1;
            q->rear = -1;
        } else {
            q->front++;
        }
    }
}

// Function to display the elements in the queue
void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
        printf("\n");
    }
}

// Example usage of the queue
int main() {
    struct Queue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    display(&q);

    dequeue(&q);
    dequeue(&q);

    display(&q);

    return 0;
}
