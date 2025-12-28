#include <stdio.h>
#include <stdlib.h>
#define REQUEST 1 * 1024 * 1024 * 1024

int main() {
  int *p;
  int *prev = (int *)malloc(1);

  printf("before: %d\n", *prev);
  *prev = 4;
  printf("after: %d\n", *prev);

  free(prev);

//malloc failure to see null
  for (int i = 0; i < 1000000; i++) {
    p = (int *)malloc(REQUEST);
    printf("i:%d: p: %p\n", i, p);
    if (p == NULL){
      free(p);
      return -1;
    }
  }
  free(p);
  return 0;
}
