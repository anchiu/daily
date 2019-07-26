//本小节学习注释的用法

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
/* 这里是注释 */
/* /* 这里是不正确的注释嵌套 */ */ 
	return 0;
}

//编译器显示 [Error] expected primary-expression before '/' token
//编译器显示 [Error] expected primary-expression brfore 'return'
//下一行编译器显示无法产生编译中间文件 ‘mian.o’ 
