#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main(void) {
    vector<string> vec;
    string str;
    cin >> str;
    //��������vector��β�����һ���ַ����ˣ���Ȼ��һ��ʼ��vector�ǿյġ�
    vec.push_back(str);
    cout << str << endl; 
    return 0;
}
