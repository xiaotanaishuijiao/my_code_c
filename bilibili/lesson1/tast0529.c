#include <stdio.h>
int hige = 6;//全局变量{}全局变量
//当全局变量和局部变量名字相同时,优先使用局部变量
//不建议变量名使用一样

int main()
{
	int age = 20;//局部变量{}内部叫局部变量
     double price = 6;//初始化
	float weight = 22.3;
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	int sum = a + b;
	printf("%d\n", sum);
	
	printf("sum=%d",sum);
	//变量：1.使用数字，下划线，字母组成
	//      2.由下划线，字母为开头

	return 0;

}