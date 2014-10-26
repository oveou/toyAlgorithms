#include "prime.h"
#include "prime_sequence.h"

#include <iostream>

using namespace std;

int main(){
    Prime p;
    cout << p.isPrime(100) << endl;  
    primeSequence ps(100);
    ps.make_prime_a();
    cout << ps << endl;   
    ps.make_prime_b();
    cout << ps << endl;
    ps.make_prime_c();
    cout << ps << endl;
}
