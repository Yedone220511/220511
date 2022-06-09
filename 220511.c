#include<stdio.h>  //分支和循环

//分支语句：if， switch
// 一个if语句如果要执行多个结果，要用大括号把多条执行扩起来，大括号内的叫代码块
//循环语句：while, for, do while

int main()
{
	int age = 100;

	//if(age<18)
	//	printf("未成年\n");

	//if(age<18)
	//	printf("未成年\n");
	//else
	//	printf("成年\n");

	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("中年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else
		printf("老不死\n");

	return 0;
}

//if (condition) {
//	return x;
//}
//return y;
//表示的是如果条件成立，return x之后不会再执行后续的return y.如果条件不成立，return y.

//int main()
//{
//	int num = 4;
//	if (num = 5)    // 单个=表示赋值，所以结果会打印呵呵，==才表示判断，要避免犯错，if里面可以写成5==num，如果写成5=num会报错
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}