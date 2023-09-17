#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> newVector;
        for (int i = 0; i < n; i++) {
            newVector.push_back(nums[i]);
            newVector.push_back(nums[i + n]);
        }
        return newVector;
    }
};
