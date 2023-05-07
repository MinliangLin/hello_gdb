#include <stdio.h>
#include "foo.h"

int main(int argc, char** argv) {
    int x = foo(argc);
    int y = bar(argc);
    printf("%d\n", x + y);
    return 0;
}