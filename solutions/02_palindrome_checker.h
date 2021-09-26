//
// Created by Eniola Ajiboye on 02/09/2021.
//
#include <bits/stdc++.h>

using namespace std;

class PalindromeChecker {
private:
    static bool solution(string word) {

      int left = 0;
      int right = word.size()-1;
      bool oneMismatch = false;

      while(left <= right){
        if(word[left] != word[right]) {
          if(oneMismatch) return false;
          oneMismatch = true;
        }
        //TODO: Fix pointer movement
        left++;
        right--;
      }
      return true;
    }

public:
    static void driver() {
      vector<string> words {"mom", "racecar", "taco", "tomcat", "eniola"};
      vector<bool> results {true, true, false, false, false};
      assert(solution(words[0]) == results[0] && "Case 1 failed");
      assert(solution(words[1]) == results[1] && "Case 2 failed");
      assert(solution(words[2]) == results[2] && "Case 3 failed");
      assert(solution(words[3]) == results[3] && "Case 4 failed");
      assert(solution(words[4]) == results[4] && "Case 5 failed");
    }
};