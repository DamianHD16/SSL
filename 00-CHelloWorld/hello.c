#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    #ifdef __STDC_VERSION__
        printf("Language version: %ld\n", __STDC_VERSION__);
    #else
        printf("__STDC_VERSION__ not defined.\n");
    #endif

    printf("Compiler version: %s\n", __VERSION__);
    return 0;
}
