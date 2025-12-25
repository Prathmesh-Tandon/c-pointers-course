#include <stdio.h>

  struct my_struct {
    long long int a;
    float b;
    int c;
};

void main() {
  char x = 'A';
  int y = 1024;
  float z = 1.0;
  long long int w = 12345;

  char *pa = &x;
  int *pb = &y;
  float *pc = &z;
  long long int *pd = &w;
//dereferencing based on data type

  printf(" sizeof(*pa): %lu\n sizeof(*pb): %lu\n sizeof(*pc): %lu\n "
         "sizeof(*pd): %lu\n\n",
         sizeof(*pa), sizeof(*pb), sizeof(*pc), sizeof(*pd));

  *pa = 'B';
  *pb = *pb + 1;
  *pc = *pc + 1;
  *pd = *pd + 1;

  printf(" x: %c\n y: %d\n z: %f\n w: %lld\n\n", *pa, *pb, *pc, *pd);
  
//pointing to struct
 struct my_struct var = {
        .a = 1024,
        .b = 2.5,
        .c = -1
    };
    printf("var.a: %lld, var.b: %f, var.c:%d\n", var.a, var.b, var.c);

    struct my_struct *ptr = &var;

    (*ptr).a = (*ptr).a + 1;
    (*ptr).b = (*ptr).b + 1;
    (*ptr).c = (*ptr).c + 2;

    printf("var.a: %lld, var.b: %f, var.c:%d\n", var.a, var.b, var.c);
    printf("(*ptr).a: %lld, (*ptr).b: %f, (*ptr).c:%d\n\n", (*ptr).a, (*ptr).b, (*ptr).c);

    ptr->a = ptr->a + 1;
    ptr->b = ptr->b + 1;
    ptr->c = ptr->c + 2;

    printf("var.a: %lld, var.b: %f, var.c:%d\n", var.a, var.b, var.c);
    printf("ptr->a: %lld, ptr->b: %f, ptr->c:%d\n", ptr->a, ptr->b, ptr->c);
    printf("(*ptr).a: %lld, (*ptr).b: %f, (*ptr).c:%d\n\n", (*ptr).a, (*ptr).b, (*ptr).c);
};

