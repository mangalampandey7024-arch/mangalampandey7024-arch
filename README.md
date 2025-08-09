#include <iostream>

int main() {
    int num1, num2, sum;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2; // Take input from user

    sum = num1 + num2; // Calculate sum
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
