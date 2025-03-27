#include <cassert>
#include <iostream>
#include <utility>
#include <vector>

#ifndef _CRT_H_
#define _CRT_H_

long long LCM(long long a, long long b);

long long GCD(long long a, long long b);

long long modInverse(long long a, long long b);

bool isPairwiseCoprime(std::vector<long long> moduli);

#endif