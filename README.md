
# README

## Overview

This repository contains my solutions to complex mathematical problems mostly written in C++ and Python. The problems involve various branches of mathematics such as calculus, linear algebra, differential equations, and number theory. The solutions are solved using various mathematical techniques in conjunction with programming.

## Contents

The repository contains the following folders:

-   `special-sequence`: This folder contains the solution to find the N-th element in a special sequence of numbers. The sequence is generated by taking all positive integers from 1 to n, where n is a positive integer input by the user, and selecting only those numbers that are relatively prime to all the previously selected numbers.

-   `reversed-sorting`: This folder contains the solution to sort a vector of integers in non-increasing order such that negative integers come before non-negative integers, and non-negative integers are sorted in increasing order.

-   `sum-of-pairs-unordered-map`: Contains code that aims to find a pair of integers in a given vector of integers that have the same sum as another pair of integer in the same vector. It uses an unordered map to store the sums of all possible pairs of integers in the vector and checks for any collisions in order to identify pairs with the same sum.

## Dependencies

### Python
Some Python solutions may require one or more of the following packages:

-   `numpy`
-   `scipy`
-   `matplotlib`

You can install these packages using `pip`:

`pip install numpy scipy matplotlib`

### C++
Some solutions are written in C++ and require a C++ compiler. You can install a C++ compiler such as [G++](https://pkgs.org/download/g++) on Linux or [MinGW](https://www.mingw-w64.org) on Windows.

## Usage

### Python

To run a Python solution, simply execute the corresponding Python file:

`python problem_xy.py` 

The output of the solution will be printed to the console.

### C++
To run a C++ solution, first compile the corresponding C++ file using the C++ compiler:

`g++ -o problem_xy problem_xy.cpp` 

This will create an executable file `problem_xy.exe` that you can run:

`./problem_xy` 

The output of the solution will be printed to the console.
## License
This repository is licensed under the MIT License. See the `LICENSE` file for details.
