#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Head pointer
struct Node* head = NULL;

/* This is the fn to create a node -> that takes an integer data, it returns a pointer to a struct Node */
struct Node* createNode(int data) {

    /* malloc -> allocates memory dynamically
              - sizeof(struct Node) -> how much memory enough to store one node.
              - (struct Node*) -> typecasting to pointer of Node
              
              finally this reserves memory for a new node and store its address in newNode. */
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
        // exit() function is used to terminate the program immediately
        // exit(0) - means ended successfully
        // exit(any non-zero) - ended due to error or abnormal condition
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at beginning
void insertAtBeginning(int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertAtEnd(int data) {
    struct Node* newNode = createNode(data);
    
    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert at position (1-based index)
void insertAtPosition(int data, int position) {
    if (position == 1) {
        insertAtBeginning(data);
        return;
    }

    struct Node* newNode = createNode(data);
    struct Node* temp = head;

    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete from beginning
void deleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    head = head->next;
    free(temp);     // this deletes the old first node memory
    /* free() is used to deallocate(release) memory that was previously allocated using malloc(). 
        malloc - gives memory & free() - returns memory back to system
        */ 
}

// Delete from end
void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}

// Delete by value
void deleteByValue(int key) {
    if (head == NULL) return;

    if (head->data == key) {
        deleteFromBeginning();
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL && temp->next->data != key) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Value not found\n");
        return;
    }

    struct Node* toDelete = temp->next;
    temp->next = temp->next->next;
    free(toDelete);
}

// Search element
void search(int key) {
    struct Node* temp = head;
    int position = 1;

    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element found at position %d\n", position);
            return;
        }
        temp = temp->next;
        position++;
    }

    printf("Element not found\n");
}

// Display list
void display() {
    struct Node* temp = head;

    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to test
int main() {
    insertAtBeginning(10);
    insertAtBeginning(5);
    insertAtEnd(20);
    insertAtPosition(15, 3);

    display();

    deleteFromBeginning();
    deleteFromEnd();
    deleteByValue(15);

    display();

    search(10);
    search(99);

    return 0;
}