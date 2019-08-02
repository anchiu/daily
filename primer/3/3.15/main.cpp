#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main(void) {
    vector<string> vec;
    string str;
    cin >> str;
    //这样就往vector的尾部添加一个字符串了，当然，一开始的vector是空的。
    vec.push_back(str);
    cout << str << endl; 
    return 0;
}
