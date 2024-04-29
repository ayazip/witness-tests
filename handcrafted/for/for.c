#include <assert.h>

void reach_error() { assert(0); }
extern char __VERIFIER_nondet_char();
extern unsigned int __VERIFIER_nondet_uint();

int main() {
    char a[20];
    
    unsigned int count = 0;    
    for (int i = 0; i < 20; i++) {
        a[i] =  __VERIFIER_nondet_char();
        if (a[i] == 'a')
            count++;
    }

    if (count == 0)
        reach_error();

    if (count == __VERIFIER_nondet_uint())
        reach_error();

    return 0;
}
