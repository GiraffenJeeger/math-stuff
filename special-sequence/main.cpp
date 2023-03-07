#include <iostream>
#include <vector>
#include "math_functions.h"

using namespace std;

int main() {

    int num = 2023;
    vector<int> sequence = generate_sequence(10);

    //Get n, the last element of the sequence
    int n = sequence.size() - 1;

    while (sequence.size() < num) {
        n++;
        int next_number = find_next_number(sequence, n);
        if (next_number != -1) sequence.push_back(next_number);
    }

    cout << "The " << num <<"rd element in the sequence is: " << sequence.back() << endl;

    return 0;
}
