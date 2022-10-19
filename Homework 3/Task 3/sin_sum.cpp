#include <iostream>
#include <cmath>

double sin_sum_calc(int elem_number, double x) {
    double sum = 0;
    for (int i = 1; i <= elem_number; ++i) {
        sum += std::sin(x);
        x = std::sin(x);
    }
    return sum;
}

void sin_sum_executor() {
    int members;
    double arg;
    std::cout << "Task 3" << std::endl;
    std::cout << "Number of sequence members: ";
    std::cin >> members;
    std::cout << "Input sine argument: ";
    std::cin >> arg;
    std::cout << sin_sum_calc(members, arg);
}