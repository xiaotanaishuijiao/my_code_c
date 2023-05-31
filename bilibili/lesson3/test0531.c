//#include <stdio.h>
////语句1顺序结构2选择结构3循环结构
//int main(){
//	printf("加入比特");
//	printf("要好好学习吗？(1/0)");
//	int a = 0;
//	scanf_s("%d", &a);
//	//选择语句
//	if (a == 1) {
//		printf("好好学习");
//	}
//	else
//	{
//		printf("卖红薯");
//	}
//	//循环语句
//	int line = 0;
//	printf("加入比特");
//	while (line<100) {
//		printf("写代码");
//		line++;
//	} //函数
//	return 0;
//}
//
//#include <stdio.h>
////函数
////求两个整数和
//int f(int c, int d) {
//	int e = c + d;
//	return e;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	//int sum = a + b;
//	int sum = f(a, b);
//	printf("%d", sum);
//
//	return 0;
//}
#include <stdio.h>
typedef unsigned int unit;
int main() {
	//数组:一组相同类型的元素
	//数组下标：arr[]都是以0开始
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	//printf("%d",arr[4]);
	//打印数组
	/*for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
		i = i + 1;
		*/
	//遍历数组
	int i = 0;
	while (i < 10) {
		printf("%d",arr[i]);
		i =i+ 1;
	}
	//算术操作符加减乘除
	//.1f表示小数点后面打印一位
	//%d取模只能是整数
	//左移是乘以，右移是除以
	//一个=是赋值，两个==是相等
	//逻辑与&&逻辑或||
	int a = 0;
	int b = 7;
	if (a && b) {
		printf("hhhh");
	}
	if (a || b) {
		printf("hhhhhh");
	}
	//三目运算
	int g = 10;
	int r = 2;
	int v=g>r ? 1 : 2;//a为真则结果为1，a为佳则结果为2
	printf("%d\n", v);
	//逗号运算符
	//(1,2,3,4)取值最后一个
	printf("%d\n", (1, 2, 3, 4));
	//关键字typedef:给类型重命名
	//关键字static:静态变量
	
	return 0;

}