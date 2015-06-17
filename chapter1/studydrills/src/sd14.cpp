//Exercise 1.20
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    std::cout << "Enter the sales items " << std::endl;
    while( std::cin >> book )
    {
        std::cout << book;
        std::cout << std::endl;
        std::cout << "Enter another sales item or Ctrl-D to exit " << std::endl;
    }
    return 0;
}
