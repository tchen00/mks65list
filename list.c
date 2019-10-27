#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * n){
  struct node *current = n;
  printf("[ ");
  while (current != NULL){
    printf("%d ", current -> i);
    current = current -> next;
  }
  printf("]\n");
}

struct node * insert_front(struct node * n, int k){
  struct node *new = malloc(sizeof(struct node));
  new -> i = k;
  new -> next = n;
  return new;
}

struct node * free_list(struct node * n){
  struct node *current = n;
  struct node *holder = n;
  while (current){
    current = current -> next;
    free(holder);
    holder = current;
  }
  return current;
}

struct node * remove_node(struct node * front, int i){
  struct node *temp = front;
  struct node *prev = temp;
  if(temp != NULL && temp->i == i) {
    temp = temp->next;
    free(temp);
    front = temp->next;
    return front;
  }
  while(temp != NULL && temp->i != i) {
    prev = temp;
    temp = temp->next;
  }
  if(temp == NULL) {
    return front;
  }
  prev->next = temp->next;
  free(temp);
  return front;
}
