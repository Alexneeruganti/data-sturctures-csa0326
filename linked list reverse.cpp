#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node)); 
    head->data = 1;
    head->next = (struct Node*)malloc(sizeof(struct Node)); 
    head->next->data = 2;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));  
    head->next->next->data = 3;
    head->next->next->next = NULL;

    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

