#include <stdio.h>
/**
 * Example using Typecasting
 */
int main() {
    int sum=18,count =5;
    double mean ;
    mean =(double)sum/count;
    printf(" Mean is %f" ,mean);
    return 0;
}

/**
 * You can generate the LLVM assembly for the main.c file in above example, using the following command:
 clang main.c -S -emit-llvm -o -


 */
