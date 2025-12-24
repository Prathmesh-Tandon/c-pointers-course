#include <stdio.h>

void main(){
    int i = 0xAA;
    char c = 2;

    int x;
    char *c_ptr;

    printf("\n");
    printf("&c = %p\n", &c);
    printf("(garbage) x = %d\n", x);
    printf("(garbage) c_ptr = %p\n", c_ptr);
    printf("(garbage) c_ptr = 0x%llx \n\n", (long long unsigned int) c_ptr);

    // 1. use of & as logical AND operator
    printf("\n");
    x= i &c;
    printf("i&c -> %d\n", x);

    /* 2. you cant use & as int with ptr or with address. */
    //c_ptr = &c;
    //x=i &c_ptr;
   // printf("i&c_ptr -> %d\n", x);
    //x=i& (&c);
    //printf("i& &c -> %d\n", x);

    //if logical AND use with char ptr variable after type casting then it compiles i.e anding operation works.
    printf("\n");
    int g = 0xff;
    x= g & (int)(&c); //pass but with warning
    //printf("g &(int)(&c) -> %x\n", x);

    // 3. assign ptr a valid address
    printf("\n");
    c_ptr=&c;
    printf("c_ptr = %p , &c = %p\n", c_ptr, &c);

    // 4. use of * with ptr variable
    printf("\n");
    i=2;
    //x=i*c_ptr; // invalid
    //printf("x=i*c_ptr => %d\n\n", x);
    x=i**c_ptr; // first * is multiply , second is derefrencing.
    printf("x=i**c_ptr => %d\n\n", x);

    // 5. extend 4 with parenthesis for defrence , read POV
    x= i* (*c_ptr);
    printf("i*(*c_ptr) => %d\n\n",x);

}