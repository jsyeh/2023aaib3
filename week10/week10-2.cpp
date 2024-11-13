/// week10-2.cpp 練習 class
/// 這三學期在寫 LeetCode 時, 每次都會看到 class, 應該算熟
/// 但是你不知道「它的大括號後面,要加分號」
/// 你輸入 class Cat 再加 大括號, CodeBlocks 它幫你加好下括號、分號
#include <iostream>
using namespace std;

class Mouse {
public:

    void print() {
        cout << "I am a mouse, 叫叫\n";
    }
};

class Cat { ///自己打跳行
public:
    void print() {
        cout << "I am a cat, meow meow\n";
    }
};

int main()
{
    Mouse mouse1, mouse2;
    Cat cat1, cat2;
    mouse1.print();
    mouse2.print();
    cat1.print();
    cat2.print();
}
