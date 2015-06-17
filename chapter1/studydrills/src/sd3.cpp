/*#include
<iostream>*/
//Output
//sd3.cpp:1:9: error: #include expects "FILENAME" or <FILENAME>
// #include
//         ^
//sd3.cpp:2:1: error: expected unqualified-id before ‘<’ token
// <iostream>
// ^
// Exercise 1.5
#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Enter 2 integers: " ;
    std::cout<< std::endl;
    std::cin >> v1; 
    std::cin >> v2;
    std::cout << "The sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 + v2;
    std::cout << std::endl;
}
