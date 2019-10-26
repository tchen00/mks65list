#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * n){
  struct node *current = n;
  while (current != NULL){
    printf("%d -> ", current -> i);
    current = current -> next;
  }
  printf("[ ]\n");
}

struct node * insert_front(struct node * n, int k){
  struct node *new = malloc(sizeof(struct node));
  new -> i = k;
  new -> next = n;
  return new;
}
