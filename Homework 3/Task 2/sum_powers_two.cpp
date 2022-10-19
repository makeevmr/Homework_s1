#include <iostream>

double power_two_sum_calc(int elem_numb) {
    double sum = 0;
    int denominator = 1;
    for (int i = 1; i <= elem_numb; ++i) {
        sum += 1.0 / denominator;
        denominator *= 2;
    }
    return sum;
}

void power_two_sum_executor() {
    int members;
    std::cout << "Task 2" << std::endl;
    std::cout << "Number of sequence members: ";
    std::cin >> members;
    std::cout << power_two_sum_calc(members);
}