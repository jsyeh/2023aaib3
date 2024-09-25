/// week03-3.cpp 要複習 string 及 iostream cin cout
#include <iostream>
#include <string>
using namespace std; ///之後不用寫 std::string 或 std::cin 或 std::cout
int main()
{
    string s;
    cout << "請輸入一個很長的字串, 中間不要有空格: ";
    cin >> s;
    cout << "字串" << s << "的長度是" << s.length() << "\n";
    for(int i=0; i<s.length(); i++){
        cout << i << ":" << s[i] << endl; ///endl 小寫L 就是 "\n"
    }
}

