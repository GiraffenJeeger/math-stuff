#include <iostream>  
#include <unordered_map>  
#include <vector>  

using namespace std;

/* 

Function to check if there exist a pair of integers in the input vector 
whose sum is equal to another pair of integers in the input vector 

*/ 
bool hasSum(vector<int>& nums) {

    //empty hash table -> store sums and indices
    unordered_map<int, int> sums;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            //calc sum of two elements and check if already in hash table
            int sum = nums[i] + nums[j];
            if (sums.find(sum) != sums.end()) {

                //get index of the other pair of int that sum to the same value
                int k = sums[sum];

                //check if current pair isnt the same as the other pair
                if (k != i && k != j) {

                    //print the two pairs with the same sum
                    cout << nums[i] << " + " << nums[j] << " = " << nums[k] << " + " << sum - nums[k] << endl;
                    return true;
                }
            }
            else {
                //add sum with index to hash table
                sums[sum] = i;
            }
        }
    }
    return false;
}

int main() {

    //exanple input vector
    vector<int> nums = { 3, 7, 1, 2, 9, 8 }; // output: 1 + 9 = 3 + 7
    if (!hasSum(nums)) {
        cout << "No such sum found." << endl;
    }
    return 0;
}
