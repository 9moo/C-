#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//using namespace std;
//extern int x;//extern�����ⲿ���� 
//int main() {
//
//	//int g_val = 37829;
//	printf("%d\n",x);
//	return 0;
//}
extern int Add(int,int);//�����ⲿ���� 
int main(){
	int a = 10;
	int b = 21;
	int sum =Add(a,b);
	printf("sum = %d\n",sum);
	return 0;
}
