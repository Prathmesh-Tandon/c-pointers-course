#include <stdio.h>

void main(){
    char *name_ptr = "PRATHMESH";
    char name_arr[] = "prathmesh";

    /*1. similarity between arrays and pointers */
    printf("name_ptr: %s\n, name_ptr: %p\n, *name_ptr: %c\n", name_ptr,name_ptr,*name_ptr);
    printf("name_arr: %s\n, name_arr: %p\n, *name_arr: %c\n", name_arr,name_arr,*name_arr);

    /*2. Difference between arrays and pointers */
    printf("sizeof(name_ptr): %lu, sizeof(name_arr): %lu\n", sizeof(name_ptr),sizeof(name_arr));

    int x[]={11,12,13};
    int *x_ptr = x;
    printf("sizeof(x[]): %lu, sizeof(x_ptr): %lu\n", sizeof(x),sizeof(x_ptr));

    /* array cannot be reassigned but pointer can be*/
    int a[]={110,112,113};
    //a=x; // not allowed
    *x_ptr = a; //allowed but warning


}