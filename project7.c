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

    //arithmetic pointers
    char a[3] = {'A', 'B', 'C'};
    int  b[3] = {10, 11, 12};
    short int  c[3] = {20, 21, 22};

    char *pta = a;
    int  *ptb = &b[0];

    printf("\nMath on char pointer!\n");
    printf("pa   = %p\n", pta);
    printf("pa+0 = %p : *(pa+0) = %c, pa[0] = %c\n", pta+0, *(pta+0), pta[0]);
    printf("pa+1 = %p : *(pa+1) = %c, pa[1] = %c\n", pta+1, *(pta+1), pta[1]);
    printf("pa+2 = %p : *(pa+2) = %c, pa[2] = %c\n", pta+2, *(pta+2), pta[2]);
    // printf("pa/2 = %p : *(pa/2) = %c, pa[2] = %c\n", pa/2, *(pa/2), pa[2]);

    printf("\nMath on int pointer!\n");
    printf("pb   = %p\n", ptb);
    printf("pb+0 = %p : *(pb+0) = %d, pb[0] = %d\n", ptb+0, *(ptb+0), ptb[0]);
    printf("pb+1 = %p : *(pb+1) = %d, pb[1] = %d\n", ptb+1, *(ptb+1), ptb[1]);
    printf("pb+2 = %p : *(pb+2) = %d, pb[2] = %d\n", ptb+2, *(ptb+2), ptb[2]);

    printf("\nMath on short int pointer!\n");
    short int  *ptc = &c[1];
    printf("pc   = %p\n", ptc);
    printf("pc+0 = %p : *(pc+0) = %d, pc[0]  = %d\n", ptc+0, *(ptc+0), ptc[0]);
    printf("pc-1 = %p : *(pc-1) = %d, pc[-1] = %d\n", ptc-1, *(ptc-1), ptc[-1]);
    printf("pc+1 = %p : *(pc+1) = %d, pc[1]  = %d\n", ptc+1, *(ptc+1), ptc[1]);
};

