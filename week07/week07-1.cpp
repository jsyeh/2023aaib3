// week07-1.cpp �٨S������ LeetCode �ǲ߭p�e Simulation��3�D
// �u��Ū2D�}�C�B�����B�e2D�}�C
// LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myDrawBoard(int board[3][3]) {
        for(int i=0; i<3; i++){ // Step04: �L�X�������ѽL�����e
            for(int j=0; j<3; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; // Step03: C���}�C, �̭�����0�N��S���H��F��
        myDrawBoard(board);
        for(auto move : moves){ // Step01: C++�i���j��
            int i = move[0], j = move[1]; // Step02: ���X�}�C�̪���
            board[i][j] = 1;
            myDrawBoard(board);
        }
        return "B"; // "A" or "B" or "Draw"����
    }
};
