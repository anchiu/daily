#include<iostream>
#include<vector>
#include<string>
using  namespace std;

int main()
{
    string word;
    vector<string> Str;
    while(cin>>word)
        Str.push_back(word);
    for(auto c:Str)
    {
         cout<<c<<" ";
         for(auto &ch:c)
            ch=toupper(ch);
         cout<<c<<endl;
    }
    cout<<endl;
    return 0;
}

//�����ķ��˺ó�ʱ�䣬��Ϊ ������һֱ����������������ɾ��������д�Ϳ����ˣ�������ж� 
