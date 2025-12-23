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

    // 1. use of & as loging and operator
    x= i &c;
    printf("i&c -> %d\n", x);

    /* 2. you cant use & as int with ptr or with address. */
    //c_ptr = &c;
    //x=i &c_ptr;
   // printf("i&c_ptr -> %d\n", x);
    //x=i& (&c);
    //printf("i& &c -> %d\n", x);

    // 3. 

}