//Exercise 2.8

#include <iostream>

int main()
{
   {
      int month = 9, day = 7;
      std::cout << month << "\t" << day << std::endl;
   }
   
   //int month = 09, day = 07;
   int day = 07; // month = 09 => invalid octal digit
   std::cout << day << std::endl;

   std::cout << "Who goes with F\145rgus?\012" << std::endl;
   std::cout << 3.14e1L << std::endl;
   //std::cout << 1024f << std::endl; Invalid suffix f on integer.
   std::cout << 3.14L << std::endl;

   std::cout << "2M\n" << std::endl;
   std::cout << "2\tM\n" << std::endl;
   return 0;
}
