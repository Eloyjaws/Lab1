//
// Created by Eniola Ajiboye on 01/09/2021.
//
#include <bits/stdc++.h>

using namespace std;

class PairWithTargetSum {
private:
    static vector<int> solution(int target, vector<int>& nums) {
      return {};
    }

public:
    static void driver() {
      vector<vector<int>> nums {
        {1, 2, 3, 4, 6},
        {2, 5, 9, 11}
      };
      vector<int> targets {6, 11};
      vector<vector<int>> results {
              {1, 3},
              {0, 2}
      };
      assert(solution(targets[0], nums[0]) == results[0] && "Case 1 failed");
      assert(solution(targets[1], nums[1]) == results[1] && "Case 2 failed");
//
//      assert(solution2(targets[0], nums[0]) == results[0] && "Case 1 failed");
//      assert(solution2(targets[1], nums[1]) == results[1] && "Case 2 failed");
    }
};