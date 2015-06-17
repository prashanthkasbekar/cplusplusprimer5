//Exercise 16
#include <iostream>

int main()
{
    int sum = 0, val = 0;
    
    //Infinite while loop
    while(true)
    {
        std::cout << "Enter an integer " << std::endl;
        if ( std::cin >> val ) // Check for EOF
            sum += val;
        else {
            std::cout << "The sum of all integers entered is " << sum << std::endl;
            break;
        }            
    }
    return 0;
}
