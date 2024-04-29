#include <assert.h>

void reach_error() { assert(0); }
extern int __VERIFIER_nondet_int();

int main() {
    int a = __VERIFIER_nondet_int();
    int b = __VERIFIER_nondet_int();

    if (a > 100 || b > 100)
        return 0;

    if (a > b) {
        int c =  a + b;
        if (c < a)
            reach_error();
    }
    return 0;
}
