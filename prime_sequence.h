#ifndef PRIME_SEQUENCE_H_
#define PRIME_SEQUENCE_H_
#include <vector>
#include <iostream>

using namespace std;

class primeSequence{
public:
    primeSequence(int n);
    // O(n^2)
    void make_prime_a();
    // O(n^2)
    void make_prime_b();
    // ~O(n)
    void make_prime_c();
    friend ostream &operator<<(ostream &os, const primeSequence &obj);    
private:
    vector<int> sequence;
    vector<int> primes;
};


#endif // PRIME_SEQUENCE_H_
