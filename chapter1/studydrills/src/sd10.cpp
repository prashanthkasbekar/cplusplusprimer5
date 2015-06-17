//Exercise 13a
#include <iostream>

int main()
{
    int sum = 0;
    
    for(int val = 50; val <= 100; ++val)
        sum += val;
        
    std::cout << "The sum of all integers from 50 to 100 inclusive is "\
              << sum << std::endl;
              
    return 0;                      
}
