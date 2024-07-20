#include <stdio.h>
#include <stdlib.h>

#define n 5

void insert();
void delete();
void display();

int queue[n], front = 0, rear = 0, choice = 1, j = 1;

int main() {
    printf("Queue using Array");
    printf("\n1. Insertion \n2. Deletion \n3. Display \n4. Exit");
    while (choice) {
        printf("\nEnter the Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
        }
    }
    return 0;
}

void insert() {
    if (rear == n) {
        printf("\nQueue is Full");
    } else {
        printf("\nEnter no %d: ", j++);
        scanf("%d", &queue[rear++]);
    }
}

void delete() {
    if (front == rear) {
        printf("\nQueue is empty");
    } else {
        printf("\nDeleted Element is %d", queue[front++]);
        if (front == rear) { // Reset queue when all elements are deleted
            front = 0;
            rear = 0;
            j = 1;
        }
    }
}

void display() {
    int i;
    if (front == rear) {
        printf("\nQueue is Empty");
        printf("\n");
    } else {
        printf("\nQueue Elements are:\n ");
        for (i = front; i < rear; i++) {
            printf("%d", queue[i]);
            printf("\n");
        }
    }
}
