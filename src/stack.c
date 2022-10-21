#include "stack.h"
#include <assert.h>

void initialize(stack* s){
    // Initializes head pointing to NULL
    s->head = NULL; 
}

void push(int x, stack* s){
  node*next_node = (node*)malloc(sizeof(node)); /* Allocates memory to new node next_node */
  next_node->data = x; /* Sets x equal to current data  */
  next_node->next = s->head;
  s->head = next_node;
}

int pop(stack* s){
  int temp = 0;
  temp = s->head->data;
  node*t = s->head;
  s->head = s->head->next;
  free (t);
  return temp;
}

bool empty(stack* s) {
  return s->head == NULL;
  /* Checks if stack is empty */
}

bool full(stack* s) {
  /* stack is never full because it is a linked list, function is unnecessary*/
  return false;
}
