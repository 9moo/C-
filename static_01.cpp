#include <iostream>
//static修饰局部变量为静态局部变量 使其生命周期变长 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int g_val = 2021;//全局变量 
 void test()
 {
 //int a = 1;//  a为一般变量，每当函数运行结束a被销毁，再次运行函数重新赋值，运行结果为22222 
 static int a = 1;//  a是一个静态局部变量不再到函数运行结束时销毁，运行结果为23456 
 a++;
 printf("a = %d\n",a);
 }
 
int main() 
{
	int i = 0;
	while (i<5)
	{
		test();
		i++;
	}

	return 0;
}
