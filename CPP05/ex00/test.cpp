#include <iostream>
#include <stdexcept>

// Function that throws an exception
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Division by zero is not allowed");
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    try {
        // Try to perform a division that may throw an exception
        double result = divide(10, 2);
        std::cout << "Result of division: " << result << std::endl;

        // This division will throw an exception
        result = divide(5, 0);

        // The following code will not be executed if an exception occurs
        std::cout << "This will not be printed if an exception occurs." << std::endl;
    } catch (const std::runtime_error& e) {
        // Catch and handle the exception
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
