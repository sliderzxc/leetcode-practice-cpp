#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& matrix, int k) {
        // Using a set to store pairs of the sum of soldiers and their respective row indices
        set<pair<int, int>> soldiers;

        // Calculate the sum of soldiers for each row and store in the min heap
        for(int row = 0; row < matrix.size(); row++) {
            int soldierCount = findSoldierCount(matrix[row]);
            soldiers.insert({soldierCount, row}) ;
        }

        // Get the k weakest rows from the set
        vector<int> weakestRows;
        auto ptr = soldiers.begin() ;
        for(int i = 0 ; i < k ; i ++){
            weakestRows.push_back(ptr->second);
            ptr++ ;
        }
        return weakestRows;
    }

    int findSoldierCount(vector<int> &row) {
        int left = 0, right = row.size() - 1;

        // Perform binary search to find the count of soldiers
        while (left <= right) {
            int mid = (left + right) / 2;
            if (row[mid] == 1)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return left;
    }
};