//
// Created by tushar on 22/3/25.
//
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int boxes[9][9] = {0};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                int num = board[i][j] - '1';
                int boxIndex = (i / 3) * 3 + (j / 3);

                if (rows[i][num] || cols[j][num] || boxes[boxIndex][num]) return false;

                rows[i][num] = cols[j][num] = boxes[boxIndex][num] = 1;
            }
        }
        return true;
    }
};



//class Solution {
//public:
//    bool isValidSudoku(vector<vector<char>>& board) {
//        // row-check
//        for (int i = 0; i < 9; i++) {
//            unordered_set<char> st;
//            for (int j = 0; j < 9; j++) {
//                if (board[i][j] != '.') {
//                    if (st.find(board[i][j]) != st.end()) {
//                        return false;
//                    } else {
//                        st.insert(board[i][j]);
//                    }
//                }
//            }
//        }
//
//        // column-check
//        for (int j = 0; j < 9; j++) {
//            unordered_set<char> st;
//            for (int i = 0; i < 9; i++) {
//                if (board[i][j] != '.') {
//                    if (st.find(board[i][j]) != st.end()) {
//                        return false;
//                    } else {
//                        st.insert(board[i][j]);
//                    }
//                }
//            }
//        }
//
//        // 3X3 grid check
//        for (int k = 0; k < 9; k += 3) {
//            for (int l = 0; l < 9; l += 3) {
//                unordered_set<char> st;
//                for (int i = k; i < k + 3; i++) {
//                    for (int j = l; j < l + 3; j++) {
//                        if (board[i][j] != '.') {
//                            if (st.find(board[i][j]) != st.end()) {
//                                return false;
//                            } else {
//                                st.insert(board[i][j]);
//                            }
//                        }
//                    }
//                }
//            }
//        }
//
//        return true;
//    }
//};