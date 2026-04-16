#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i=0 ,value = 0;
        int l = s.length();
        bool negative = false;

        while(i<l && isspace(s[i])){
            i++;
        }

        if(i == l){
            return 0;
        }

        if(s[i] == '-'){
            negative = true;
            i++;
        }

        else if(s[i] == '+'){
            i++;
        }

        else if(!isdigit(s[i])){
            return 0;
        }

        if(i==l){
            i++;
        }

        while(i<l && s[i]=='0'){
            i++;
        }

        int max = INT_MAX/10;
        int min = INT_MIN/10;

        while(i<l && isdigit(s[i])){
            int digit = s[i] - '0';

            if(value > max) return INT_MAX;
            if((value == max) && digit>7) return INT_MAX;

            if(value < min) return INT_MIN;
            if((value == min) && digit>8) return INT_MIN;

            if(negative){
                value = value*10 + (-digit);
            }
            else{
                value = value*10 + digit;
            }
            i++;
        }
        return value;
    }
};