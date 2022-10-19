#include <cmath>
#include <iostream>

void sine_approximation_calc(double x1, double x2, double dx, double eps) {
    std::cout << "             " << "f(x)         " << "sin(x)" << std::endl;
    double x = x1;
    while (x <= x2) {
        double row_sum = 0;
        double numerator = x;
        double denominator = 1;
        double factorial = 1;
        while (std::abs(row_sum - std::sin(x)) > eps) {
            row_sum += numerator / denominator;
            numerator *= (-1) * x * x;
            factorial += 2;
            denominator *= (factorial - 1) * factorial;
        }
        std::cout << x << "       " << row_sum << "       " << std::sin(x) << std::endl;
        x += dx;
    }
}


void sine_approximation_executor() {
    double x1, x2, dx, eps;
    std::cout << "Task 5" << std::endl;
    std::cout << "Enter left border x1: ";
    std::cin >> x1;
    std::cout << "Enter right border x2: ";
    std::cin >> x2;
    std::cout << "Enter step dx: ";
    std::cin >> dx;
    std::cout << "Enter accuracy eps: ";
    std::cin >> eps;
    sine_approximation_calc(x1, x2, dx, eps);
}