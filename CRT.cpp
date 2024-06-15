#include "_CRT.h"

// Implementation File

// Finds the greatest common demonimator between two numbers using the Euclidean algorithm
long long GCD(long long a, long long b) {
    if (a < b) std::swap(a, b);

    long long gcd = b;
    long long temp;

    while (b != 0) {
        std::cout << a << " " << b << std::endl;
        temp = a;

        a = b; 
        b = temp % b;

        if (b != 0) gcd = b;
    }

    return gcd;
}

