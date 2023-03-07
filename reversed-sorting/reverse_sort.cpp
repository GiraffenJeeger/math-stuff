#include "reverse_sort.h"
#include <algorithm>

//comparison function
bool comp(int a, int b) {

    /*

    If a is negative, check if b is negative
    If a and b negative, return a > b
    Otherwise return true to sort a before b

    If a is non-negative, check if b is negative
    If b is negative, return false to sort b beofre a
    Otherwise return a < b to sort a before b

    */
    return (a < 0) ? (b < 0 ? a > b : true) : (b < 0 ? false : a < b);
}


std::vector<int> reversed_sort(std::vector<int>& nums) {

    //sort the nums vector using cmp() func
    std::sort(nums.begin(), nums.end(), comp);
    //return sorted vector nums
    return nums;
}
