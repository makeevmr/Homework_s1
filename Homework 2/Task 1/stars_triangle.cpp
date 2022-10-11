#include <iostream>

void right_triangle(int rows) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void right_triangle_executor() {
    int rows_number;
    std::cout << "Task 1" << std::endl;
    std::cout << "Enter number of rows: ";
    std::cin >> rows_number;
    right_triangle(rows_number);
}