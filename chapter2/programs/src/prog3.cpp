// Program demonstrating the use of scopes

#include <iostream>

int reused = 42; // Bad programming style to define a local variable in a function with the same name as global variable.
                 // Global scope

int main()
{
   int unique = 0; //Block scope

   std::cout << reused << " " << unique << std::endl; // Prints reused from global scope and unique from local scope (42 0)
 
   int reused = 0; // Block scope . Masks the global value

   std::cout << reused << " " << unique << std::endl; // Prints reused from local scope and unique from local scope (0 0)

   std::cout << ::reused << " " << unique << std::endl; // Prints reused from global scope and unique from local scope (42 0)
                                                        // ::reused : Since there is no namespace before ::, we refer to global scope.

   return 0;
}
