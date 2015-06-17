// Exercise 12
#include <iostream>

int main()
{
    int sum = 0;
    // Loop from -100 to +100
    for(int i = -100; i <= 100; ++i) {
        sum += i; // Update sum
    }
    // Print sum = 0
    std::cout << "The sum of numbers between -100 and 100 inclusive is "\
              << sum << std::endl;
    return 0;
}
