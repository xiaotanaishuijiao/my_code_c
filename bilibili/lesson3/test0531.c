//#include <stdio.h>
////���1˳��ṹ2ѡ��ṹ3ѭ���ṹ
//int main(){
//	printf("�������");
//	printf("Ҫ�ú�ѧϰ��(1/0)");
//	int a = 0;
//	scanf_s("%d", &a);
//	//ѡ�����
//	if (a == 1) {
//		printf("�ú�ѧϰ");
//	}
//	else
//	{
//		printf("������");
//	}
//	//ѭ�����
//	int line = 0;
//	printf("�������");
//	while (line<100) {
//		printf("д����");
//		line++;
//	} //����
//	return 0;
//}
//
//#include <stdio.h>
////����
////������������
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
	//����:һ����ͬ���͵�Ԫ��
	//�����±꣺arr[]������0��ʼ
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	//printf("%d",arr[4]);
	//��ӡ����
	/*for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
		i = i + 1;
		*/
	//��������
	int i = 0;
	while (i < 10) {
		printf("%d",arr[i]);
		i =i+ 1;
	}
	//�����������Ӽ��˳�
	//.1f��ʾС��������ӡһλ
	//%dȡģֻ��������
	//�����ǳ��ԣ������ǳ���
	//һ��=�Ǹ�ֵ������==�����
	//�߼���&&�߼���||
	int a = 0;
	int b = 7;
	if (a && b) {
		printf("hhhh");
	}
	if (a || b) {
		printf("hhhhhh");
	}
	//��Ŀ����
	int g = 10;
	int r = 2;
	int v=g>r ? 1 : 2;//aΪ������Ϊ1��aΪ������Ϊ2
	printf("%d\n", v);
	//���������
	//(1,2,3,4)ȡֵ���һ��
	printf("%d\n", (1, 2, 3, 4));
	//�ؼ���typedef:������������
	//�ؼ���static:��̬����
	
	return 0;

}