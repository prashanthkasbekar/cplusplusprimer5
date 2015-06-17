//Exercise 1.23 and 1.24

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    Sales_item trans;
    std::cout << "Enter a book transaction " << std::endl;
    if ( std::cin >> book )
    {
         while ( std::cin >> trans )
         {
            if( trans.isbn() == book.isbn() )
            {
                book += trans;
                std::cout << "Enter another transaction for the same book" \
                           << std::endl;
            }
            else
            {
                std::cout << "Total number of transactions of " << book.isbn() \
                          << " is " << book << std::endl;
                book = trans;
            }
         }
    }
    return 0;
}
