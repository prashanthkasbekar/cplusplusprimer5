//Exercise 1.9
#include <iostream>

int main()
{
    int sum = 0, val = 50;
    //Execute loop till val is 100
    while(val <= 100) {
        sum += val; //sum = sum + val -- Compound assignment operator
        ++val; //val = val + 1 -- Pre increment operator
    }
    //Print sum from 50 to 100
    std::cout << "The sum from 50 to 100 inclusive is "\
              << sum << std::endl;
    return 0;              
}
