#include "CRT.cpp"

int main() {
    std::cout << "Welcome to the Chinese Remainder Theorem Calcualtor\n";
    
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