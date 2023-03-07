#include <iostream>
#include <vector>
#include "reverse_sort.h"

int main() {

    //example input vector to sort
    std::vector<int> nums = { -3, 7, -1, 0, -2, 4, 8, -5, 6 };

    //new vector result, call reversed_sort func and sort input vector
    std::vector<int> result = reversed_sort(nums);

    //print sorted vector
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
