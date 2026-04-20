#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string unitRoman(int digit){
        switch(digit){
            case 0: return "";
            case 1: return "I";
            case 2: return "II";
            case 3: return "III";
            case 4: return "IV";
            case 5: return "V";
            case 6: return "VI";
            case 7: return "VII";
            case 8: return "VIII";
            case 9: return "IX";
        }
        return "";
    }

    string tensRoman(int digit){
        switch(digit){
            case 0: return "";
            case 1: return "X";
            case 2: return "XX";
            case 3: return "XXX";
            case 4: return "XL"; 
            case 5: return "L";
            case 6: return "LX";
            case 7: return "LXX";
            case 8: return "LXXX";
            case 9: return "XC"; 
        }
        return "";
    }

    string hundredRoman(int digit){
        switch(digit){
            case 0: return "";
            case 1: return "C";
            case 2: return "CC";
            case 3: return "CCC";
            case 4: return "CD";
            case 5: return "D";
            case 6: return "DC"; 
            case 7: return "DCC"; 
            case 8: return "DCCC";
            case 9: return "CM";
        }
        return "";
    }

    string thousandRoman(int digit){
        switch(digit){
            case 0: return "";
            case 1: return "M";
            case 2: return "MM";
            case 3: return "MMM";
        }
        return "";
    }

    string intToRoman(int num) {
        string roman = "";

        // Units
        int digit = num % 10;
        roman = unitRoman(digit) + roman;
        num = num / 10;

        // Tens
        digit = num % 10;
        roman = tensRoman(digit) + roman;
        num = num / 10;

        // Hundreds
        digit = num % 10;
        roman = hundredRoman(digit) + roman;
        num = num / 10;

        // Thousands
        digit = num % 10;
        roman = thousandRoman(digit) + roman;

        return roman;
    }
};