#include "CRT.h"

static void simulAssign(long long *a, long long *b, long long a_new, long long b_new) {
    *a = a_new;
    *b = b_new;
}


long long LCM(long long a, long long b) {
    return a * b / GCD(a, b);
}

// Implmentation of the Euclidean Algorithm
long long GCD(long long a, long long b) {
    if (a < b) std::swap(a, b); 

    long long gcd = b;
    long long temp;

    while (b != 0) {
        temp = a;

        a = b; 
        b = temp % b;

        if (b != 0) gcd = b;
    }

    return gcd;
}

// Implementation of the Extended Euclidean Algorithm
// Source: https://brilliant.org/wiki/extended-euclidean-algorithm/
long long modInverse(long long a, long long b) {
    long long s = 0;  long long s_prev = 1;
    long long t = 1;  long long t_prev = 0;
    long long r = b; long long r_prev = a;

    long long quotient;
    long long m = b;

    while (r != 0) {
        quotient = r_prev / r;

        simulAssign(&r_prev, &r, r, r_prev - quotient * r);
        simulAssign(&s_prev, &s, s, s_prev - quotient * s);
        simulAssign(&t_prev, &t, t, t_prev - quotient * t);
    }
    
    return (s_prev + m)% m;
}

// Credit to https://cs.stackexchange.com/questions/93030/algorithm-for-checking-if-a-list-of-integers-is-pairwise-coprime
// a and b are coprime iff ab = lcm(a,b)
// a is coprime to b, c iff a is coprime to bc

// i.e., we can multiply the whole vector and make sure the
// product is the same as the LCM

// WIP: Currently not sure how I'm gonna check the list of moduli
// WIP: Current iteration is just a vector 
// WIP: Would be better if coprimality was checked at each step
bool isPairwiseCoprime(std::vector<long long> moduli) {
    long long lcm =  moduli[0];
    long long product = 1;

    for (auto & mod : moduli) {
        lcm = LCM(lcm, mod);
        product *= mod;
    }

    return lcm == product;
}
