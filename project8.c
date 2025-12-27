#include <stdio.h>

//without parameters
void function_1() {
  printf("function_1()\n");
}

void function_2() {
  printf("function_2()\n");
}

//with parameters
    void function_3(int a) {
  printf("function_3(): a = %d\n", a);
}

void function_4(int b) {
  printf("function_4(): b = %d\n", b);
}

typedef void (*ptr)(int);

int main() {
    void (*func_ptr)();

    func_ptr = function_1;
    func_ptr(); //deferencing

    func_ptr = function_2;
    func_ptr();

    ptr pf;
    pf = function_3;
    pf(10);

    ptr qf;
    qf = &function_4;
    qf(20);

    return 0;
}
