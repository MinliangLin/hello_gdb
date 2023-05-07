#include "foo.h"

int foo(int x) {
    int x1 = x * x;
    int x2 = x1 * x;
    return x2 * x;
}

int bar(int x) {
    int x1 = x + x;
    int x2 = x1 + x;
    return x2 + x;
}
