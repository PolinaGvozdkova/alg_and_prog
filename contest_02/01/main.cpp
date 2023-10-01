#include <cmath>


bool is_prime(int number) {
    if (number < 2) {
        return false;
    }
    
    int sqrtNumber = sqrt(number);
    for (int i = 2; i <= sqrtNumber; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    
    return true;
}

