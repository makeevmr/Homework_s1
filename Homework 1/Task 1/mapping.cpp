#include <iostream>

double set_map(double A_point, double A_left, double A_right, double B_left, double B_right) {
    double A_point_percent = (A_point - A_left) / (A_right - A_left);
    double B_point = (B_right - B_left) * A_point_percent + B_left;
    return B_point;
}

void set_map_executor() {
    std::cout << "Task 1" << std::endl;
    double A_point, A_left, A_right, B_left, B_right;
    std::cout << "Enter left border A:" << std::endl;
    std::cin >> A_left;
    std::cout << "Enter right border A:" << std::endl;
    std::cin >> A_right;
    std::cout << "Enter a point on segment A: " << std::endl;
    std::cin >> A_point;
    std::cout << "Enter left border B:" << std::endl;
    std::cin >> B_left;
    std::cout << "Enter right border B:" << std::endl;
    std::cin >> B_right;
    std::cout << "Image: " << set_map(A_point, A_left, A_right, B_left, B_right) << std::endl;
}