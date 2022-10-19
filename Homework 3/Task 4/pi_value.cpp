#include <cmath>
#include <iostream>
int pi_calc(double accuracy) {
    const double PI = 3.141592653589793;
    int counter = 1;
    double calc_pi = 0;
    int sign = 4;
    int N = 0;
    while (std::abs(PI - calc_pi) > accuracy) {
        calc_pi += (double)sign / counter;
        sign *= -1;
        counter += 2;
        ++N;
    }
    return N;
}

void pi_calc_executor() {
    double accuracy;
    std::cout << "Task 4" << std::endl;
    std::cout << "Enter the calculation precision: ";
    std::cin >> accuracy;
    std::cout << pi_calc(accuracy);
}