//ָ��
//1.�ڴ棺�ڴ�Ữ��Ϊһ�������ڴ浥Ԫ��һ���ڴ��С����1byte�ֽ� ��ÿһ���ڴ浥Ԫ����һ�����
#include <stdio.h>
//�ṹ��
struct stu {
	//�ṹ���Ա
	char name[20];//����
	int age;//����
	char sex[10];//�Ա�
};
//void print(sturct stu* ps) {
//	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);
//};
int main() {
	int a = 10;//���ڴ������ĸ��ֽڣ��洢10 
	printf("%p\n",&a);//��ӡ��ַ��%p      000000F9357EF674
	int* p = &a;//*˵��p��ָ�����,int˵��pָ�������int����
	//p����ָ����������ָ�루��ַ���ı����ͽ���ָ�����
	char ch = 'w';
	char* pc = &ch;
	printf("%p\n", &ch);
	*p=20;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�pָ��Ķ���* p����pָ��Ķ���
	printf("%p\n", a);//a=20
	//ָ������Ĵ�С :������ʲô���͵�ָ�룬����ָ���������������Ŵ�С�ģ�ȡ���ڵ�ַ��Ŷ��ռ�
	//32λ������32��bit   4���ֽ�
	//64λ������64��bit   8���ֽ�
	printf("%d\n", sizeof(char*));//8
	printf("%d\n", sizeof(short*));//8
	printf("%d\n", sizeof(int*));//8
	printf("%d\n", sizeof(double*));//8

	//�ṹ��:�Զ������Ͱ�һЩ��һ���������һ��   strcu
	struct stu s ={"zhangsan",20,"nan"};
	//�ṹ�����.��Ա��
	printf("%s %d %s\n", s.name, s.age, s.sex);//һ һ��Ӧ
	/*printf(&s);*/
	//
	return 0;
}