#include <stdio.h>
int hige = 6;//全局变量{}全局变量
//当全局变量和局部变量名字相同时,优先使用局部变量
//不建议变量名使用一样
//变量的作用域：1.局部变量:只能在变量范围内
//             2.全局变量:可以用于整个工程
//变量的生命周期：1.局部变量:进入作用域生命周期开始,出作用域生命周期结束
//               2.全局变量:整个程序的生命周期
 
//声明来自外部的符号：extern int a；

int main(){
	
		int age = 20;//局部变量{}内部叫局部变量
		double price = 6;//初始化
		float weight = 22.3;
		int a = 0;
		int b = 0;
		scanf_s("%d%d", &a, &b);
		int sum = a + b;
		printf("%d\n", sum);

		printf("sum=%d", sum);
		//变量：(变的值)1.使用数字，下划线，字母组成
		//      2.由下划线，字母为开头
		//      3.不能和标识符相同
		//常量:(不变的值)1.字面常量:30;3.14;
		//     2.const修饰的常变量:const int a =10;变量a 不能改变,本质是变量但是不能被修改
		// int a =0; a=10;printr("%d",a);此时a被修改为10
		//     3.#define定义的标识符常量:#define MAX 100只要看见MAX则为100,MAX没有定义变量类型
		//     4.枚举常量:enum生活中有一种东西可以一一列举出来
		//     enum color 三元色                         性别 enum sex
		//     {red,green,blue};这三个就是枚举常量        {male,female,secret};这三个就是枚举常量 
		//     int main(){int num = 10;
		//     enum color c=red;;创建了颜色变量c
		//     red=20是错误的,因为red是枚举常量    
        //      }
	
	return 0;

}
//字符串:"hello tan!\n""abc"存储字符串char arr[]="abc";print("%s",arr);最后面有结束标志\0占四个字节
//                                  char arr[]=('a','b');print("%s",arr);
// stelen()求字符串长度的函数,需要头文件string.h
//转义字符:\n 是换行,\0结束标准,
//注释://单行字符/* */多行字符