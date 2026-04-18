#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[21][21];
    bool solve(int i, int j,string &s, string &p){
        if(j == p.length()){
            return i == s.length();
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }

        bool match_first = false;

        if((i < s.length()) && (p[j] == s[i] || p[j] == '.')){
            match_first = true;
        }

        if(j + 1 < p.length() && p[j + 1] == '*'){
            bool not_take = solve(i,j+2, s, p);
            bool take = match_first && solve(i+1, j, s, p);

            return dp[i][j] = take || not_take;
        }
        return dp[i][j] = match_first && solve(i+1, j+1, s, p);
    }
    bool isMatch(string s, string p) {
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, s,p);
    }
};