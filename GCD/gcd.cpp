#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int result = gcd(num1, num2);
    std::cout << "The GCD of " << num1 << " and " << num2 << " is " << result << std::endl;

    return 0;
}
