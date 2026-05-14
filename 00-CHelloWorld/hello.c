#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    #ifdef __STDC_VERSION__
        printf("Language version: %ld\n", __STDC_VERSION__);
    #endif

    #ifdef __GNUC__
        printf("Compiler version: %s\n", __VERSION__);
    #endif

    return 0;
}
