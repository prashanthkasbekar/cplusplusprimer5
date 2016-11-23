// Exercises 2.13 and 2.14

#include <iostream>

int i = 42;

int main()
{
   int i = 100;
   int j = i;  // j = i = 100

   std::cout << i << " " << j << std::endl;

   int x = 100, sum = 0;

   for(int x = 0; x != 10; x++)
   {
      sum += x;
   }

   std::cout << x << " " << sum << std::endl;// x = 100 sum = 45
   return 0;
}
