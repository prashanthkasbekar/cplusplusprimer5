// Exercise 11
#include <iostream>

int main()
{
    int v1, v2;
    
    //Accept input
    std::cout << "Enter two integers" << std::endl;
    std::cin >> v1 >> v2;
    
    std::cout << "The numbers from " << v1 << " to " << v2 << " are: " \
              << std::endl;
    
    // Check if numbers are to be printed in ascending order          
    if (v1 < v2)
    {
        while(v1 <= v2)
        {
            std::cout << v1 << "\t";
            ++v1;
        }
    }
    // Check if numbers are to be printed in descending order
    else if(v1 > v2)
    {
        while(v1 >= v2)
        {
            std::cout << v1 << "\t";
            --v1;
        }
    }
    // Print the number if equal
    else
    {
        std::cout << v1 << "\t";
    }
    
    std::cout << std::endl;
}
