// Exercises 2.9 and 2.10

#include <iostream>
#include <string>

std::string global_str; //Default initialized. Initial value "" (Empty string)
int global_int; // Global int object default initialized to 0

int main()
{
   //std::cin >> int input_value; //Error : Expected primary-expression before int
   int input_value;
   std::cin >> input_value;
   std::cout << input_value << std::endl;

   int i = {3.14}; // Error: Cannot use list initialization with information loss on C++ 11 compliant compiler
   std::cout << i << std::endl;

   //double salary = wage = 9999.99; // Error: wage was not declared in this scope
   double wage = 9999.99;
   double salary = wage;
   std::cout << wage << '\t' << salary << std::endl;

   int j = 3.14; // i = 3
   std::cout << j << std::endl;

   std::string local_str;

   int local_int;

   std::cout << "Default initialized string object global_str value is " << global_str << std::endl\
             << "Default initialized int object global_int value is " << global_int << std::endl;

   std::cout << "Default initialized string object local_str value is " << local_str << std::endl\
             << "Default initialized int object local_int value is " << local_int << std::endl;

   return 0;
}
