#include <iostream>

int main()
{
    int sum = 0,val = 1;
    //Execute loop till val is 10
    while(val <= 10) {
        sum += val; //sum = sum + val -- compound assignment operator
                    //add val to previous sum and store
                    //new value in sum
        ++val; //val = val + 1-- pre-increment operator. Add 1 to val                  
    }
    
    //Print sum of values from 1 to 10
    std::cout<<"The sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}
