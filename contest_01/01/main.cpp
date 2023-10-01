#include <iostream>
#include <cmath>

int main() {
    double pi_approximation = sqrt(12.0) * (
        1.0 - 1.0 / (3 * 3) + 1.0 / (5 * 3 * 2) - 1.0 / (7 * 3 * 3) + 1.0 / (9 * 3 * 4) - 1.0 / (11 * 3 * 5)
    );

    std::cout << pi_approximation << std::endl;
    
    return 0;
}
