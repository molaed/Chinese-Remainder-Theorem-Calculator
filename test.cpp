#include "CRT.cpp"

void test_LCM() {
    std::cout << "Test1: LCM(3, 3)\n";
    std::cout << LCM(3, 3) << std::endl;
}

void test_GCD() {
    std::cout << "Test 1: GCD(1, 3)\n";
    assert(GCD(1, 3) == 1);

    std::cout << "Test 2: GCD(3, 3)\n";
    assert(GCD(3, 3) == 3);

    std::cout << "Test 3: GCD(3, 1)\n";
    assert(GCD(3, 1) == 1);

    std::cout << "Test 4: GCD(144, 12)\n";
    assert(GCD(144, 12) == 12);

    std::cout << "Test 5: GCD(1234532, 835872)\n";
    assert(GCD(1234532, 835872) == 4);

    std::cout << "Test 6: GCD(1234532, 835872)\n";
    assert(GCD(1234532, 835872) == 4);
}

void test_isPairwiseCoprime() {
    std::vector<long long> m1 = {1, 2, 3, 5};
    std::vector<long long> m2 = {3, 6, 9, 20000};
    std::vector<long long> m3 = {1235, 430468906, 394932, 96881};
    std::vector<long long> m4 = {10, 4952019383323};

    std::cout << "Test 1: isPairwiseCoprime(1, 2, 3, 5)\n";
    std::cout << isPairwiseCoprime(m1) << std::endl;

    std::cout << "Test 2: isPairwiseCoprime(3, 6, 9, 20,000)\n";
    std::cout << isPairwiseCoprime(m2) << std::endl;

    std::cout << "Test 3: isPairwiseCoprime(1,235, 430,468,906, 394,932, 96,881)\n";
    std::cout << isPairwiseCoprime(m3) << std::endl;

    std::cout << "Test 4: isPairwiseCoprime(10, 4,952,019,383,323))\n";
    std::cout << isPairwiseCoprime(m4) << std::endl;
}

int main() {
    std::cout << "Welcome to the Chinese Remainder Theorem Calcualtor\n";

    std::vector<long long> remainders;
    std::vector<long long> moduli;

    if (!isPairwiseCoprime(moduli)) {
        std::cout << "Not all moduli are pairwise coprime!\n";
        
        return 1;
    }

}