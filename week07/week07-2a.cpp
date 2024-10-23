// week07-2a.cpp 學習計畫 Simulation第3題
// 讀2D陣列、模擬(1,2兩人)、畫2D陣列
// LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myDrawBoard(int board[3][3]) {
        for(int i=0; i<3; i++){ // Step04: 印出模擬的棋盤的內容
            for(int j=0; j<3; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; // Step03: C的陣列, 裡面都放0代表沒有人放東西
        int now = 1; //1,2,1,2 (把 now = 3 - now 就會跳動了)
        myDrawBoard(board);
        for(auto move : moves){ // Step01: C++進階迴圈
            int i = move[0], j = move[1]; // Step02: 取出陣列裡的值
            board[i][j] = now;
            myDrawBoard(board);
            now = 3 - now;
        }
        return "B"; // "A" or "B" or "Draw"平手
    }
};
