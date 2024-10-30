#include <iostream>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int result = sum(num1, num2);
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}
