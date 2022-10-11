#include <iostream>
#include "Homework 2/Task 0/arithmetic_mean.h"
#include "Homework 2/Task 1/stars_triangle.h"
#include "Homework 2/Task 2/isosceles_triangle.h"
#include "Homework 2/Task 3/diamond_stars.h"
#include "Homework 2/Task 4/several_diamonds_stars.h"
#include "Homework 2/Task 5/checkered_diamond_stars.h"
#include "Homework 2/Task 6/hollow_diamond_stars.h"
#include "Homework 2/Task 7/graphics_drawer.h"

int main() {
    int task_number;
    std::cout << "Enter number of task (0 - 7): ";
    std::cin >> task_number;
    switch (task_number) {
        case 0:
            average_executor();
            break;
        case 1:
            right_triangle_executor();
            break;
        case 2:
            isosceles_triangle_executor();
            break;
        case 3:
            diamond_executor();
            break;
        case 4:
            several_diamonds_executor();
            break;
        case 5:
            checkered_diamond_executor();
            break;
        case 6:
            hollow_diamond_executor();
            break;
        case 7:
            graph_drawer_executor();
            break;
        default:
            std::cout << "The entered number is not between 0-7";
    }
    return 0;
}
