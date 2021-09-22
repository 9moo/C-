// int x = 2021;//全局变量 
//static int x = 2021;//static修饰后的全局变量 无法被引用 
int Add(int x,int y){
//static int Add(int x,int y){	//static修饰后的函数无法被引用（改变了链接属性） 
			int z = x+y;
			return z;
}
