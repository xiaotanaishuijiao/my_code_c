//指针
//1.内存：内存会划分为一个个的内存单元（一个内存大小就是1byte字节 ）每一个内存单元都有一个编号
#include <stdio.h>
//结构体
struct stu {
	//结构体成员
	char name[20];//名字
	int age;//年龄
	char sex[10];//性别
};
//void print(sturct stu* ps) {
//	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);
//};
int main() {
	int a = 10;//向内存申请四个字节，存储10 
	printf("%p\n",&a);//打印地址是%p      000000F9357EF674
	int* p = &a;//*说明p是指针变量,int说明p指向对象是int类型
	//p就是指针变量，存放指针（地址）的变量就叫做指针变量
	char ch = 'w';
	char* pc = &ch;
	printf("%p\n", &ch);
	*p=20;//解引用操作符，意思就是通过p中存放的地址，找到p指向的对象，* p就是p指向的对象
	printf("%p\n", a);//a=20
	//指针变量的大小 :不管是什么类型的指针，都是指针变量，是用来存放大小的，取决于地址存放多大空间
	//32位机器：32个bit   4个字节
	//64位机器：64个bit   8个字节
	printf("%d\n", sizeof(char*));//8
	printf("%d\n", sizeof(short*));//8
	printf("%d\n", sizeof(int*));//8
	printf("%d\n", sizeof(double*));//8

	//结构体:自定义类型把一些单一类型组合在一起   strcu
	struct stu s ={"zhangsan",20,"nan"};
	//结构体对象.成员名
	printf("%s %d %s\n", s.name, s.age, s.sex);//一 一对应
	/*printf(&s);*/
	//
	return 0;
}