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

//这道题耗费了好长时间，因为 编译器一直报错，最后把整个工程删掉，重新写就可以了，真的是有毒 
