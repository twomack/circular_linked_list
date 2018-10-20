#ifndef CIRCULAR_LINKED_LIST_H
#define CIRCULAR_LINKED_LIST_H

/* structs */
struct Node;

/* functions */
void print_list(struct Node *last);
void push(struct Node *last_ref, int data);
int pop(struct Node *last_ref, int data);
void add_begin(struct Node *last_ref, int data);
void add_end(struct Node *last_ref, int data);
void add_after(struct Node *last_ref, int data);
void add_before(struct Node *last_ref, int data);

#endif /* CIRCULAR_LINKED_LIST_H */
