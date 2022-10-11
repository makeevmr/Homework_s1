#include <iostream>

double in_int_power(double base, int power) {
    double answer = 1;
    for (int i = 0; i < power; ++i) {
        answer *= base;
    }
    return answer;
}

void graph_drawer() {
    const int height = 21;
    const int width = 41;
    double y = 1.5;
    while(y >= -1.5) {
        double x = -1.5;
        while (x <= 1.5) {
            if ((in_int_power((x * x + y * y - 1), 3) - x * x * y * y * y) <= 0) {
                std::cout << '*';
            } else {
                std::cout << '.';
            }
            x += 3.0 / (width - 1);
        }
        y += -3.0 / (height - 1);
        std::cout << std::endl;
    }
}

void graph_drawer_executor() {
    std::cout << "Task 7" << std::endl;
    graph_drawer();
}