//
// Created by tushar on 7/8/24.
//
#include <iostream>
using namespace std;

string numberToWords(int nums) {
    string s = to_string(nums);
    int n = s.length();
    string ans="";
    for (int i = n; i > n; i--) {
        if(s[i] == '0')
        {
            switch (s[i-1]) {
                case 1:
                    s +='ten';
                    break;
                case 2:
                    s +='twenty';
                    break;
                case 3:
                    s +='thirty';
                    break;
                case 4:
                    s +='fourty';
                    break;
                case 5:
                    s +='fifty';
                    break;
                case 6:
                    s +='fifty';
                    break;
                case 7:
                    s +='seventy';
                    break;
                case 8:
                    s +='eighty';
                    break;
                case 9:
                    s +='ninety';
                    break;
            }
        }

    }
}
int main() {
    int nums = 123;
    cout<<numberToWords(nums);
    return 0;
}