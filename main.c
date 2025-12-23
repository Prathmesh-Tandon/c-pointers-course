#include <stdio.h>

void main() {
    /* delete line #5 and write your code in this function */
    printf("Hello, World!\n");

    //defining and declaring a pointer
    char c='A';
    char *c_ptr = &c;
    printf("c = %c\n&c = %p\n", c,&c);
    printf("c_ptr = %p\n", c_ptr);

    //address of c_ptr
    printf("&c_ptr = %p\n", &c_ptr);

    //content of actual variable that ptr holding
    printf("*c_ptr = %c\n", *c_ptr);

}