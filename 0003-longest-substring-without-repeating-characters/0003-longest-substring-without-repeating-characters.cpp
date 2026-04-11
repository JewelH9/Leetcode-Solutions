#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int left = 0, right = 0, maxlen = 0;

        for(right; right < s.size(); right++){
            
            if(map.find(s[right]) != map.end()){
                left = max(left, map[s[right]] + 1);
            }
            map[s[right]] = right;
            maxlen = max(right - left + 1, maxlen);
        }
        return maxlen;
    }
};