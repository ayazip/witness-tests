#include <assert.h>

void reach_error() { assert(0); }
extern int __VERIFIER_nondet_int();

int main() {
            
    int count = 0;    
    int a = __VERIFIER_nondet_int();

    if (a <= 0)
        return 0;

    while (a > 0) {
        int n = __VERIFIER_nondet_int();
        if (n > 0)
            a = a - n;
        count++;
    }

    if (count == -a)
        reach_error();

    return 0;
}
