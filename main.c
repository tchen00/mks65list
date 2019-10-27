#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  struct node *n = NULL;
  printf("\n-------------------\n");
  printf("Printing empty list: \n");
  print_list(n);
  printf("-------------------\n");
  printf("Printing list:\n");
  int i;
  for ( i = 0; i <= 9; i++){
    n = insert_front(n, i);
    // print_list(n);
  }
  print_list(n);
  printf("-------------------\n");
  printf("Removing 8:\n");
  n = remove_node(n,8);
  print_list(n);
  printf("-------------------\n");
  printf("Removing 9:\n");
  n = remove_node(n,9);
  print_list(n);
  printf("-------------------\n");
  printf("Removing 4:\n");
  n = remove_node(n,4);
  print_list(n);
  printf("-------------------\n");
  printf("Removing 0:\n");
  n = remove_node(n,0);
  print_list(n);
  printf("-------------------\n");
  printf("Removing -1:\n");
  n = remove_node(n,-1);
  print_list(n);
  printf("-------------------\n");
  printf("Freeing List:\n");
  n = free_list(n);
  printf("Printing empty list:\n");
  print_list(n);

  return 0;
}
