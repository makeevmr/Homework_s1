#include <iostream>
#include <cmath>

void hollow_diamond_maker(int rows) {
    bool is_row_even = rows % 2 == 0;
    int max_stars_row = is_row_even ? rows + 1 : rows;
    int i = -max_stars_row + 1;
    int abs_i = std::abs(i);
    while (abs_i < max_stars_row) {
        int stars = max_stars_row - abs_i;
        int stars_count = 0;
        int spaces = abs_i / 2 - ((rows + 1) % 2);
        if ((abs_i == 0) && is_row_even) {
            i += 2;
            abs_i = std::abs(i);
            continue;
        }
        for (int j = 1; j <= max_stars_row - abs_i / 2 - ((rows + 1) % 2); ++j) {
            if (j <= spaces) {
                std::cout << ' ';
            } else {
                ++stars_count;
                if (stars_count == 1) {
                    std::cout << '*';
                } else if (stars_count == stars) {
                    std::cout << '*';
                } else {
                    std::cout << ' ';
                }
            }
        }
        i += 2;
        abs_i = std::abs(i);
        std::cout << std::endl;
    }
}

void hollow_diamond_executor() {
    int rows_number;
    std::cout << "Task 6" << std::endl;
    std::cout << "Enter number of rows: ";
    std::cin >> rows_number;
    hollow_diamond_maker(rows_number);
}