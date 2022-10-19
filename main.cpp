#include <iostream>
#include "Homework 3/Task 1/harmonic_sum.h"
#include "Homework 3/Task 2/sum_powers_two.h"
#include "Homework 3/Task 3/sin_sum.h"
#include "Homework 3/Task 4/pi_value.h"
#include "Homework 3/Task 5/sine_approximation.h"

int main() {
    int task_number;
    std::cout << "Enter number of task (1 - 5): ";
    std::cin >> task_number;
    switch (task_number) {
        case 1:
            harmonic_sum_executor();
            break;
        case 2:
            power_two_sum_executor();
            break;
        case 3:
            sin_sum_executor();
            break;
        case 4:
            pi_calc_executor();
            break;
        case 5:
            sine_approximation_executor();
            break;
        default:
            std::cout << "The entered number is not in the range 1 5 or is non-integer";
            break;
    }
    return 0;
}