//
// Created by ashis on 9/25/2020.
//

int mult() {
    int a =5;
    int b = 3;
    int c = a * b;
    return c;
}

//Now run the command 
//clang -emit-llvm -S multiply.c -o multiply.ll .This will generate .ll file in the directory
