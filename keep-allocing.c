#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    size_t size = 1024 * 1024 * 1024;
    while(1) {
        char *a = malloc(size);
        if (a != NULL) {
            memset(a, 'a', size);
            size *= 2;
            fprintf(stderr, "^");
        } else {
            size /= 2;
            fprintf(stderr, "v");
        }
        if (size == 1) {
            fprintf(stderr, "\n");
            exit(0);
        }
    }
    return 0;
}
