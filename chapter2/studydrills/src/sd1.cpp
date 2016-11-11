//Exercise 2.4
#include <iostream>

int main()
{
   unsigned u = 10, u2 = 42;
   std::cout << u2 - u << std::endl; //Expected 32 : Actual : 32
   std::cout << u - u2 << std::endl; //Expected 224 : Actual : 4294967264 ( Remember 32 bit?) 

   int i = 10, i2 = 42;
   std::cout << i2 - i << std::endl; //Expected 32 : Actual : 32
   std::cout << i - i2 << std::endl; //Expected -32 : Actual : -32

   std::cout << i - u << std::endl; //Expected 256? : Actual : 0
   std::cout << u - i << std::endl; //Expected 256? : Actual : 0

   return 0;
}
