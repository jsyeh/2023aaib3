#include <iostream>
#include <string>
using namespace std;

class Cat {
public: ///記得要加 public 才能被外面看到
    string name;
    Cat(string _name){ ///物件建構子 constructor (左邊沒有void)
        name = _name;
    } /// 沒有 return 值
    void print(){
        cout << "My name is " << name << ".\n";
    }
};

int main()
{///建出 cat1 和 cat2 時, 會用建構子,把 物件 建構出來
    Cat cat1("小白"), cat2("小花");
    cat1.print();
    cat2.print();
}
