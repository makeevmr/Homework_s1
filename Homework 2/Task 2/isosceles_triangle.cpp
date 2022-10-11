#include <iostream>

void isosceles_triangle_maker(int rows) {
    int spaces;
    for (int i = 1; i <= rows; ++i) {
        spaces = ((rows * 2 - 1) - (i * 2 - 1)) / 2;
        for (int k = 1; k <= rows + i - 1; ++k) {
            std::cout << (k <= spaces ? ' ' : '*');
        }
        std::cout << std::endl;
    }
}

void isosceles_triangle_executor() {
    int rows_number;
    std::cout << "Task 2" << std::endl;
    std::cout << "Enter number of rows: ";
    std::cin >> rows_number;
    isosceles_triangle_maker(rows_number);
}