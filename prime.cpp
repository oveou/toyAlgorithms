#include "prime.h"

bool Prime::isPrime(int a){
    for(int j = 2; j < a / 2; ++j){
        if (!(a % j)){
            return false;
        }      
     }
     return true;    
}
