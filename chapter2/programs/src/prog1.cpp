// Example of infinite loop due to unsigned int

#include <iostream>

int main()
{
   for(unsigned int i = 10; i >=0; i--)
   {
      std::cout << i << std::endl;
   }
   return 0;
}
