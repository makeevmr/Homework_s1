#include <iostream>

double average(int sum, double number) {
    return sum / number;
}

void average_executor() {
    double number;
    std::cout << "Task 0" << std::endl;
    std::cout << "Enter number: ";
    std::cin >> number;
    int sum = 0;
    if (number < 1) {
        std::cout << "Number less than one";
    } else {
        for (int i = 1; i <= number; ++i) {
            sum += i;
            std::cout << i << ' ';
        }
        std::cout << std::endl;
        std::cout << "Mean number: " << average(sum, number);
    }
}