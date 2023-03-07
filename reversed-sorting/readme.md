
## Problem

Create an algorithm that provides an efficient solution for the `"Reversed Sorting Problem"`: given an unsorted array of numbers that contains both positive and negative numbers, the task is to sort the array such that negative numbers come first in descending order, followed by positive numbers in ascending order.

Example:
Given the `array [-3, 7, -1, 0, -2, 4, 8, -5, 6]`, the result should be `[-1, -2, -3, -5, 0, 4, 6, 7, 8]`.

The algorithm should be as efficient as possible and have a worst-case time complexity of `O(n*log(n))` or better.

## Solution
To solve the problem, we define a custom comparison function `comp()` that takes two integers `a` and `b` and returns a boolean value indicating whether `a` should come before `b` in the sorted vector. The comparison function checks the sign of the integers and the order in which they should appear.

We then define a sorting function `reversed_sort()` that takes a vector of integers as input and sorts it using `std::sort()` with the custom comparison function `cmp()`. The sorted vector is returned as output.

To use the solution, simply include the header file `reverse_sort.h` in your code and call the `reversed_sort()` function with a vector of integers as input.
