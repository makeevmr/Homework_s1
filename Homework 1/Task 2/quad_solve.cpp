#include <iostream>
#include <cmath>

void quad_solver(double a, double b, double c, double *roots) {
    double disc = b * b - 4 * a * c;
    roots[0] = (-b + std::sqrt(disc)) / (2 * a);
    roots[1] = (-b - std::sqrt(disc)) / (2 * a);
}

double linear_solve(double b, double c) {
    return -c / b;
}

void quad_equation_solver() {
    double a, b, c;
    std::cout << "Task 2" << std::endl;
    std::cout << "Enter first coefficient:" << std::endl;
    std::cin >> a;
    std::cout << "Enter second coefficient:" << std::endl;
    std::cin >> b;
    std::cout << "Enter third coefficient:" << std::endl;
    std::cin >> c;
    if (a != 0) {
        if (b * b - 4 * a * c >= 0) {
            double roots[2] = {0, 0};
            quad_solver(a, b, c, roots);
            std::cout << "First root: " << roots[0] << std::endl;
            std::cout << "Second root: " << roots[1] << std::endl;
        } else {
            std::cout << "No real roots";
        }
    } else {
        if (b == 0) {
            if (c == 0) {
                std::cout << "Infinite Solutions";
            } else {
                std::cout << "The expression doesn't make sense";
            }
        } else {
            std::cout << "Single root: " << linear_solve(b, c) << std::endl;
        }
    }
}