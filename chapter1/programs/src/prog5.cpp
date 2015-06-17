#include <iostream>

int main()
{
    //currVal holds the current value. val holds the new value
    int currVal = 0, val = 0;
    //read first value and store it in currVal to compare
    std::cout << "Enter an integer sequence" << std::endl;
    if (std::cin >> currVal) {
        int cnt = 1; // Stores number of times currVal occured
        while (std::cin >> val) {
            if (val == currVal)
                ++cnt; //If the same value, increment count
            else {
                std::cout << currVal << " occurred " << cnt << " times "\
                             << std::endl; // Print the number of times currVal
                                           // occurred
                currVal = val; // Value changed, store val in currVal
                cnt = 1; // Change cnt to 1
            }
        }
    }
    return 0;
}
