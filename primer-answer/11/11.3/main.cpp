//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std; 
//
//int main(int argc, char** argv) {
//	map<string,size_t> word_count;
//	string word;
//	while (cin >> word)
//	{
//		++word_count[word];
//	}
//	for (const auto &w : word_count)
//		cout << w.first << "occurs " << w.second << ((w.second > 1) ? "times" : "time" ) << endl;
//	return 0;
//}



#include<iostream>  
#include<string>  
#include<fstream>
#include<vector> 
#include<map>  
using namespace std;
 
int main(int argc, char**argv)  
{ 
	//map的定义
	map<string,size_t> word_count;
	fstream in("1.txt");//定义一个输入流
	string word;
 
	while (in>>word)
	{
		++word_count[word];
	}
 
	//map同样支持迭代器操作
	map<string ,size_t>::iterator mapi;
	for (mapi = word_count.begin(); mapi != word_count.end(); ++mapi)//C++ 11支持:const auto &s : word_count
	{
		//两个成员分别代表关键字和对应值
		cout<<mapi->first<<" ";
		cout<<mapi->second<<" "<<endl;
	}
 
	return 0;  
}  

