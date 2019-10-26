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
