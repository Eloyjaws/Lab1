//
// Created by Eniola Ajiboye on 02/09/2021.
//
#include <bits/stdc++.h>

using namespace std;

class FirstDuplicateValue {
private:
    static char solution(string& nums) {
      // Is sorted?
      unordered_set<char> s;
      for(int i=0; i<nums.size(); i++){
        if(s.find(nums[i]) != s.end()){
          return nums[i];
        }
        s.insert(nums[i]);
      }
      return '*';
    }
public:
    static void driver() {

//      vector<vector<int>> nums {
//        {1,2,3,4,5,4,3,2,1},
//        {1,2,3,4,5,6,7,7},
//        {1,2,3,4,5}
//      };
      vector<string> words {"MotherM", "doggo", "carnegie", "taco"};
//      vector<int> results {4, 7, INT_MAX};
//      for(int i=0; i<words.size(); i++){
//        char answer = solution(words[i]);
//        cout << answer << endl;
//      }
//      assert(solution(nums[0]) == results[0] && "Case 1 failed");
//      assert(solution(nums[1]) == results[1] && "Case 2 failed");
//      assert(solution(nums[2]) == results[2] && "Case 2 failed");

//      cout << "Solution to test case 2:" << solution(nums[1]);
    }
};