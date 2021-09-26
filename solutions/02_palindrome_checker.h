//
// Created by Eniola Ajiboye on 02/09/2021.
//
#include <bits/stdc++.h>

using namespace std;

class PalindromeChecker {
private:
    static vector<int> solution(vector<int>& nums) {
      return {};
    }
public:
    static void driver() {
      vector<vector<int>> nums {
        {-2, -1, 0, 2, 3},
        {-3, -1, 0, 1, 2}
      };
      vector<vector<int>> results {
        {0, 1, 4, 4, 9},
        {0, 1, 1, 4, 9}
      };
      assert(solution(nums[0]) == results[0] && "Case 1 failed");
      assert(solution(nums[1]) == results[1] && "Case 2 failed");
    }
};