#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        string str;
        int n=s.size();
        int chr = 2 * (numRows-1);
        for(int i = 0; i<numRows; i++){
            int index = i;
            while(index < n){
                str += s[index];
                if(i != 0 && i != numRows - 1){
                    int inbetw = chr - 2*(i);
                    int secondbetw = index + inbetw;
                    if(secondbetw < n){
                        str += s[secondbetw];
                    }
                }
                index += chr;
            }
        }
        return str;
    }
};