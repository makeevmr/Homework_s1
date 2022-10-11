#include <iostream>

bool in_ring_checker(double x_point, double y_point, double big_radius, double small_radius) {
    double hypo_sq = x_point * x_point + y_point * y_point;
    return (hypo_sq <= big_radius * big_radius) && (hypo_sq >= small_radius * small_radius);
}

void ring_executor() {
    double x_point, y_point, big_radius, small_radius;
    std::cout << "Task 3" << std::endl;
    std::cout << "Enter x value of point:" << std::endl;
    std::cin >> x_point;
    std::cout << "Enter y value of point:" << std::endl;
    std::cin >> y_point;
    std::cout << "Enter smaller radius:" << std::endl;
    std::cin >> small_radius;
    std::cout << "Enter bigger radius:" << std::endl;
    std::cin >> big_radius;
    if (in_ring_checker(x_point, y_point, big_radius, small_radius)) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}