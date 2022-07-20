// Program for add two numbers in C++
#include <iostream>

int main() {
    int a, b;

    std::cout << "Input two numbers:\n";
    std::cin >> a >> b; // operator >> to stream from console. << and >> are binary operators

    int sum = a+b; // sum may be declared when needed

    std::cout << "Sum of " << a << " and " << b << " is: " << sum << std::endl;
}