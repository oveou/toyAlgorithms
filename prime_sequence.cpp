#include "prime_sequence.h"

primeSequence::primeSequence(int n){
    sequence = vector<int>(n + 1, 1);
    sequence[1] = 0;

}

void primeSequence::make_prime_a(){
    for(unsigned i = 2; i < sequence.size(); ++i){
        if(sequence[i]){
            for(unsigned k = 2 * i; k < sequence.size(); k += i){
                sequence[k] = 0;    
            }
        }    
    }    
}

void primeSequence::make_prime_b(){
    for(unsigned i = 2; i < sequence.size(); ++i){
        if(sequence[i]){
            for(unsigned k = i * i; k < sequence.size(); k += i){
                sequence[k] = 0;    
            }
        }    
    }    
}

void primeSequence::make_prime_c(){
    for(unsigned i = 2; i < sequence.size(); ++i){
        if(sequence[i]){
            primes.push_back(i); 
        }
        for(unsigned j = 0; j < primes.size() && (primes[j] * i < sequence.size()); ++j){
            sequence[i * primes[j]] = 0;
            if(!(i % primes[j])){
                break;    
            }
        }
    }   
    
}

ostream &operator<<(ostream &os, const primeSequence &obj){
    for(unsigned i = 1; i < obj.sequence.size(); ++i){
        if(obj.sequence[i]){
            os << i << ",";    
        }    
    }
    os << "\n";
    return os;
}
