#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  struct node *n = NULL;
  printf("Printing empty list: \n");
  print_list(n);

  return 0;
}
