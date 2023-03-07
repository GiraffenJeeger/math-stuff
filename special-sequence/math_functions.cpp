#include "math_functions.h"

//Calculate the greatest common divisor of a and b
//Basic euclidean algorithm
int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

/*
ALTERNATIVE:

#include <numeric>

int gcd(int a, int b){
    int num = std::gcd(a, b);
    return num;
}
*/

//Push all ints from 1 to n into the back of vector
std::vector<int> generate_sequence(int n) {
    std::vector<int> sequence;
    for (int i = 1; i <= n; i++) {
        sequence.push_back(i);
    }
    return sequence;
}

//Loop numbers of sequence to check if n is relatively prime to all numbers
int find_next_number(const std::vector<int>& sequence, int n) {
    bool is_new_number = true;

    //Ceck if the gcd of the sequence number and n isnt equal to 1
    //If it is return -1 else return n
    for (int i = 0; i < sequence.size(); i++) {
        if (gcd(n, sequence[i]) != 1) {
            is_new_number = false;
            break;
        }
    }
    
    if (is_new_number) return n;
    return -1;
}


