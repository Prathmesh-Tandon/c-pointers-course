#include <stdio.h>
#include "math_library.h"

int main() {
    /* delete line #5 and write your code in this function */
    printf("Hello, World!\n");

    //defining and declaring a pointer
    char c='A';
    char *c_ptr = &c;
    printf("c = %c\n&c = %p\nc_ptr = %p\n", c,&c,c_ptr);

    //address of c_ptr
    printf("&c_ptr = %p\n", &c_ptr);

    //content of actual variable that ptr holding - dereferencing
    printf("*c_ptr = %c\n", *c_ptr);


  //function ptr using array
  execute_operation(ADD, 100, 5);
  execute_operation(SUB, 100, 5);
  execute_operation(MUL, 100, 5);
  execute_operation(DIV, 100, 5);
  return 0;

}
