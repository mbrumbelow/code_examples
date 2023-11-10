
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main() {
    const int i = 4 + 5;
    int foo[i];
    size_t n = sizeof(foo) / sizeof(foo[0]);
    
    printf("foo :%lu", n);
    
    return 0;
}
