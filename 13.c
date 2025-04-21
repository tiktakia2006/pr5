#include <stdlib.h>

void leak() {
    static void *ptr;
    ptr = malloc(1024);
}

int main() {
    leak();
    return 0;
}

