#include <iostream>

double harmonic_sum_calc(int elem_numb) {
    double sum = 0;
    for (int i = 1; i <= elem_numb; ++i) {
        sum += 1.0 / i;
    }
    return sum;
}

void harmonic_sum_executor() {
    int members;
    std::cout << "Task 1" << std::endl;
    std::cout << "Number of sequence members: ";
    std::cin >> members;
    std::cout << harmonic_sum_calc(members);
}