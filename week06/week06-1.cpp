/// week06-1.cpp STL vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a; ///伸縮自如、可變長度的陣列, 超好用
    a.push_back(30);
    a.push_back(20);
    a.push_back(10);
    for(int i=0; i<3; i++){
        cout << a[i] << "\n";
    }
    sort(a.begin(), a.end()); ///小到大排序
    for(int i=0; i<3; i++){
        cout << a[i] << " ";
    }
}
