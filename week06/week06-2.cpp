/// week06-2.cpp CPE 第2題 UVA 10107 - What is the Median?
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a;
    int now;
    while( cin >> now ){
        a.push_back(now);
        sort(a.begin(), a.end());
        int N = a.size();
        if(N%2==1) cout << a[N/2] << "\n";
        else cout << (a[N/2-1] + a[N/2])/2 << "\n";
        ///cout << now << "\n"; ///先這樣寫
    } ///你在小黑裡輸入時, 結束全部輸入 Ctrl-Z 加 Enter
}
