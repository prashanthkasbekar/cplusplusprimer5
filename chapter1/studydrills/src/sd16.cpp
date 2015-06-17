//Exercise 1.22
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item Total;
    Sales_item Trans;
    std::cout << "Enter a transaction " << std::endl;
    while( std::cin >> Trans )
    {
        Total += Trans;
        std::cout << "Enter another transaction with same ISBN or Ctrl-D to "\
                     << "exit " << std::endl;   
    }
    std::cout << "The total of all transactions is " << Total << std::endl;
    return 0;
}
