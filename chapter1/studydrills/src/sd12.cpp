//Exercise 13c
#include <iostream>

int main()
{
    int v1,v2;
    
    std::cout << "Enter 2 integers: " << std::endl;
    std::cin >> v1 >> v2;
    
    if(v1 < v2)
    {
        for(;v1 <= v2; ++v1)
        {
            std::cout << v1 << "\t";
        }
    }
    else if(v1 > v2)
    {
        for(;v1 >= v2; --v1)
        {
            std::cout << v1 << "\t";
        }
    }
    else
        std::cout << v1;
        
    std::cout << std::endl;
    return 0;        
}
