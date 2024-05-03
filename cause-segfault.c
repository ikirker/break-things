#include <stdio.h>


#ifdef __INTEL_COMPILER
#error "icc seems to optimise away the segfault-causing code, for this. Build with gcc only"
#endif

int main() {
    int a;
    int *b;
    b = &a;
    *(b+10000)=1;
    return 0;
}
