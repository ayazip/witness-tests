#include <assert.h>

void reach_error() { assert(0); }
extern int __VERIFIER_nondet_int();

int main() {
    int a = __VERIFIER_nondet_int() > 0 ? 1 : 0;
    int b = __VERIFIER_nondet_int() > 0 ? 0 : (a == 0 ? 1 : 0);

    if (b == 1)
        reach_error();

    return 0;
}
