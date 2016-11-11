//Correct way to write loop with unsigned int

#include <iostream>

int main()
{
   unsigned u = 11;

   while(u > 0)
   {
      std::cout << --u << std::endl;
   }
   return 0;
}
