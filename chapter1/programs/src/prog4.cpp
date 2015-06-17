#include <iostream>

int main()
{
    int sum = 0, val = 0;
    // Accept numbers from keyboard till EOF is obtained
    std::cout << "Enter an integer" << std::endl;
    while(std::cin >> val) {
        std::cout << "Enter an integer" << std::endl;
        sum += val;
    }
    
    std::cout << "The sum of all numbers entered is: "\
              << sum << std::endl;
              
    return 0;              
}
