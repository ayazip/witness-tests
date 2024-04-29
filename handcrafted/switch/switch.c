#include <assert.h>

void reach_error() { assert(0); }
extern int __VERIFIER_nondet_int();

int main() {
    int a = __VERIFIER_nondet_int();
    char b = __VERIFIER_nondet_char();

    switch(a) {
    case 1:
        return 0;
    case 2:
        switch(b){
        case 1:
            reach_error();
        case 2:
            return 0;
        case 3:
            a++;
            break;    
        default:
            b++;   
        }
    case 3:
        a++;
        break;    
    default:
        b++;   
    }
    return 0;
}
