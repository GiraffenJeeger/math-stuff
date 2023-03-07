
## Problem

Given a vector of integers, the problem is to sort the vector in non-increasing order such that negative integers come before non-negative integers, and non-negative integers are sorted in increasing order.

## Solution
To solve the problem, we define a custom comparison function `comp()` that takes two integers `a` and `b` and returns a boolean value indicating whether `a` should come before `b` in the sorted vector. The comparison function checks the sign of the integers and the order in which they should appear.

We then define a sorting function `reversed_sort()` that takes a vector of integers as input and sorts it using `std::sort()` with the custom comparison function `cmp()`. The sorted vector is returned as output.

To use the solution, simply include the header file `reverse_sort.h` in your code and call the `reversed_sort()` function with a vector of integers as input.
