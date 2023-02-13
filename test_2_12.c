#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//printf("%d\n", strlen("c:\test\328\test.c"));\\strlen--计算字符串长度
//转义字符在谭浩强C语言40页
//printf("(Are you OK\?\?)");
//  printf("c:\\te\a   st\ves\"\\t.c\?\a\a");//\t为转义字符
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	/*printf("hello world\n");*/
	//return 0;

//注释是用来解释复杂代码的
//     “//”是C++的注释风格   /**/是C语言的注释风格
//      C的注释不支持嵌套



//选择语句
//int main()
//{
//	int input = 0;//输入的值
//	printf("加入比特:>");
//	printf("那要好好学习吗(0/1)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}



//循环语句
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//			printf("写代码:%d\n",line);
//			line++;
//	}
//	if (line == 30000)
//	{
//		printf("great offer\n");
//	}	
//	return 0;
//}


//函数

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	//sum = num1 + num2;
	//用函数的方式解决
	sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}