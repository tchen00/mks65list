#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  struct node *n = NULL;
  printf("\n-------------------\n");
  printf("Printing empty list: \n");
  print_list(n);
  printf("\n-------------------\n");

  int i;
  for ( i = 0; i <= 9; i++){
    n = insert_front(n, i);
    print_list(n);
  }

  return 0;
}
