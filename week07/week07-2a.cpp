// week07-2a.cpp �ǲ߭p�e Simulation��3�D
// Ū2D�}�C�B����(1,2��H)�B�e2D�}�C
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
        int now = 1; //1,2,1,2 (�� now = 3 - now �N�|���ʤF)
        myDrawBoard(board);
        for(auto move : moves){ // Step01: C++�i���j��
            int i = move[0], j = move[1]; // Step02: ���X�}�C�̪���
            board[i][j] = now;
            myDrawBoard(board);
            now = 3 - now;
        }
        return "B"; // "A" or "B" or "Draw"����
    }
};
