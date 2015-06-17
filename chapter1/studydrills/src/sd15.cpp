//Exercise 1.21
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cout << "Enter 2 books with the same ISBN number " << std::endl;
    //Assume user will not cheat. 
    std::cin >> item1 >> item2;
    std::cout << "The sum is " << item1 + item2 << std::endl;
    return 0;
}
