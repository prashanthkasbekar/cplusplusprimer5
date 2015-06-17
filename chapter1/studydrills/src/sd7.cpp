//Exercise 10
#include <iostream>

int main()
{
    int val = 10;
    // Loop from 10 to 0
    while (val >= 0) {
        std::cout << val << "\t"; //Print each value with a tab space
        --val; // Decrement val - Very important. Do not forget
    }
    std::cout << std::endl; //Print a newline at the end
    return 0;
}
