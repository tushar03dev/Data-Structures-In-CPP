#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int n = s.size();
    string ans = "";
    int i = n - 1, j = n - 1;
    while (j >= 0 && i >= 0) {
        if (s[i] == ' ') {
            i--;
            j--;
            continue;
        }
        if (s[i] != ' ' && (s[j] == ' ' || j == 0)) {
            string output;
            if(j == 0 && s[j] == ' '){
                output = s.substr(j+1, i - j);
            }
            else if(j == 0){
                output = s.substr(j, i - j+1);
            }
            else {
                output = s.substr(j + 1, i - j);
            }

            if (ans.size() == 0) {
                ans += output;
            } else {
                ans += " " + output;
            }
            j--;
            i = j;
            continue;
        }
        if (s[i] != ' ' && s[j] != ' ') {
            j--;
            continue;
        }
    }
    return ans;
}

int main(){
    string s = " asdasd df f";
    cout<<reverseWords(s);
    return 0;
}