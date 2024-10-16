// week06-5.cpp LeetCode 1078. Occurrences After Bigram
// ����1�Ӧr�B���ۧ���2�Ӧr�A�A�ӴN�O�ڭ̭n����3�Ӧr
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; // �񵪮� (���Y�ۦp���}�C), �Ϊ� �n return �@��

        stringstream ss(text); // �� string �ন�� cin cout �� stream

        string word1, word2, word3; // ��1�B��2�B��3�Ӧr
        ss >> word1; // �� cin >> word1 ����k, Ū����
        ss >> word2;
        while(ss >> word3){
            if(word1==first && word2==second) ans.push_back(word3); // �񵪮�
            word1 = word2;
            word2 = word3;
        }

        return ans;
    }
};
