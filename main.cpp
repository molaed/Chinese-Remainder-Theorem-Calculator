#include "CRT.h"
#include "test.h"

int main(int argc, char **argv) {
    std::vector<std::string> args(argv, argv + argc);
    if (argc > 1 && args[1] == "test") {
        test_LCM();
        test_GCD();
        test_isPairwiseCoprime();
        test_modInverse();

        return 1;
    }

    std::cout << "Welcome to the Chinese Remainder Theorem Calcualtor\n";
    std::cout << "To test the soundness of this implementation, rerun as ./CRT test\n";
    int eqnCount;
    long long answer = 0;
    long long product = 1;

    std::cout << "Please input the amount of equations in the system\n";
    std::cin >> eqnCount;

    std::vector<long long> remainders(eqnCount);
    std::vector<long long> moduli(eqnCount);

    std::cout << "Please input pairs of a_i, mod_i\n";
    std::cout << "E.g., input \"1 3\" to add the eqn x≡1(mod 3)\n";
    for (int i = 0; i < eqnCount; i++) {
        std::cin >> remainders[i] >> moduli[i];
        product *= moduli[i];
    }

    if (!isPairwiseCoprime(moduli)) {
        std::cout << "Not all moduli are pairwise coprime!\n";
        return 1;
    }

    for (int i = 0; i < eqnCount; i++) {
        long long m_i = product / moduli[i];
        answer += remainders[i] * m_i * modInverse(m_i, moduli[i]);
    }

    std::cout << "The answer is " << answer % product << " mod " << product;
}