/*program for three linked list units*/
#include <stdio.h>
#include <stdlib.h>

 struct Node {
   int data;
   struct Node* next;
 };

 int main()
 {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
  // allocation of 3 nodes
head = (struct Node*) malloc(sizeof(struct Node));
second = (struct Node*) malloc(sizeof(struct Node));
third = (struct Node*) malloc(sizeof(struct Node));
/* the blocks below show the dynamic alloction of linked lists
# represents any random value
head           second           third
        |                |               |
        |                |               |
    +---+-----+     +----+----+     +----+----+
    | #  | #  |     | #  | #  |     |  # |  # |
    +---+-----+     +----+----+     +----+----+ */

head->data = 1; // assign a data value in the first node
head->next = second; // link to the second node

second->data = 2; // assign a data value in the 2nd node
second->next = third; // link to the 3rd node

third->data = 3; // assign a data value in the 3rd node
third->next = NULL; // assign NULL for the next node

// diagram of how the above works
//Accessing the next value of the next node
/*head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +----+----+
    | 1  | o----->| 2 | o-----> |  3 |  NULL
    +---+---+     +---+---+     +----+----+ */

return 0;

}
