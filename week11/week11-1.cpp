/// week11-1.cpp 使用 Hash Map 或 Hash Set
/// 不能直接在 CodeBlocks 使用, 因為是 C++ 2021
/// Setting-Compiler, 加入 c++11 就可以了
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> table;
    table[9977341] = 9;
    table[4433997] = 4;
    cout << table[9977341] << "\n";
    cout << table[4433997] << "\n";
}
