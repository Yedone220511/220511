#include<stdio.h>  //��֧��ѭ��

//��֧��䣺if�� switch
// һ��if������Ҫִ�ж�������Ҫ�ô����ŰѶ���ִ�����������������ڵĽд����
//ѭ����䣺while, for, do while

int main()
{
	int age = 100;

	//if(age<18)
	//	printf("δ����\n");

	//if(age<18)
	//	printf("δ����\n");
	//else
	//	printf("����\n");

	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("����\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else
		printf("�ϲ���\n");

	return 0;
}

//if (condition) {
//	return x;
//}
//return y;
//��ʾ�����������������return x֮�󲻻���ִ�к�����return y.���������������return y.

//int main()
//{
//	int num = 4;
//	if (num = 5)    // ����=��ʾ��ֵ�����Խ�����ӡ�Ǻǣ�==�ű�ʾ�жϣ�Ҫ���ⷸ��if�������д��5==num�����д��5=num�ᱨ��
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}