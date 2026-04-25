#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> ans;

    void solve(int idx, string &digits, string &curr, vector<string> &map) {
        if (idx == digits.size()) {
            ans.push_back(curr);
            return;
        }

        string letters = map[digits[idx] - '0'];

        for (char ch : letters) {
            curr.push_back(ch);
            solve(idx + 1, digits, curr, map);
            curr.pop_back(); 
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> map = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        string curr = "";
        solve(0, digits, curr, map);

        return ans;        
    }
};