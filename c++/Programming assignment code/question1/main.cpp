#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef struct Node {
    int day;
    struct Node* next;
} Node;

Node* head = NULL;

// Function to insert a day into the linked list
void insert(int day) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->day = day;
    newNode->next = head;
    head = newNode;
}

// Function to display the selected leave days
void display() {
    printf("Selected leave days: ");
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->day);
        current = current->next;
    }
    printf("\n");
}

// Function to clear the linked list and free memory
void clear() {
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    head = NULL;
}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Select a single day leave\n");
        printf("2. Select multiple day leaves\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int day;
            printf("Enter the leave day: ");
            scanf("%d", &day);
            insert(day);
        } else if (choice == 2) {
            int startDay, endDay;
            printf("Enter the start day: ");
            scanf("%d", &startDay);
            printf("Enter the end day: ");
            scanf("%d", &endDay);
            for (int day = startDay; day <= endDay; ++day) {
                insert(day);
            }
        } else if (choice == 3) {
            display();
            clear();
            printf("Program terminated.\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
