#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of terms for the Fibonacci series: ";
    std::cin >> n;

    int first = 0, second = 1;

    std::cout << "Fibonacci Series: ";
    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            std::cout << i << " ";
        } else {
            int next = first + second;
            std::cout << next << " ";
            first = second;
            second = next;
        }
    }

    return 0;
}
