#define _CRT_SECURE_NO_WARNINGS 1

////数组
#include<stdio.h>
//int main()
//{
//	//数组  一组相同类型的元素的集合
//	//10个整形1-10存起来
//	//数组是通过下标来访问的
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//下标为------- 0,1,2,3,4,5,6,7,8,9
//	//char ch[5] = { 'a','b','c' };//不完全初始化，剩余默认为0
//	//下标为-------   0,1,2,3,4,5,
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//
//	printf("%d\n", sizeof(arr[0]));
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//C语言通过这种方式计算数组[]内的元素个数
//
//	printf("%d", sz);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//
//	printf("%d\n",  ~a);
//	//~按位(二进制位)取反[把所有二进制位中的1变为0，0变为  1.
//		return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++     先++，后使用
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++     先使用，后++
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0; 
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int MAX = 0;
//
//	/*if (a > b)
//		MAX = a;
//	else
//		MAX = b;*/
//	MAX = a > b ? a : b;
//	printf("%d\n", MAX);
//	return 0;
//}

//typedef unsigned int u_int;//类型定义（类型重定义）
//int main()
//{
//	unsigned int num = 100;
//	u_int num = 100;
//	return 0;
//}
//
//static  -静态的
//1.  修饰局部变量（出局部变量周期不销毁。改变了生命周期，本质上是改变了变量的存储类型）
//2. 
//



