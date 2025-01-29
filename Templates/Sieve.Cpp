#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int maxN)
{
    vector<bool> isPrime(maxN + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= maxN; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= maxN; ++i)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
    return primes;
}