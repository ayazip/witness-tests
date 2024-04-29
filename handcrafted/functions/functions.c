#include <assert.h>

void reach_error() { assert(0); }
extern int __VERIFIER_nondet_int();
int foo();
int bar();
int baz();

int foo(int x) {
    int y = __VERIFIER_nondet_int();

    if (x > 100 || y > 100)
        return 0;

    if (x > y)
        return bar(x + y);

    return 0;
}

int bar(int x) {
    int y = __VERIFIER_nondet_int();

    if (x > 100 || y > 100)
        return 0;

    if (x > y)
        return baz(x * y);

    return 0;
}

int baz(int x) {
    int y = __VERIFIER_nondet_int();
    if (x > y)
        reach_error();
    return 100;
}

int main() {
    int x = __VERIFIER_nondet_int();
    
    int y = foo(x);
    int z = bar(y);
    baz(z);

    return 0;    
}
