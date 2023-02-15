#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//int a = 10;//a在内存中要分配空间的4个字节
//printf("%p\n", &a);//%p是专门用来打印地址的
	//int *pa = &a;//pa是用来存放地址的，在C语言中pa是叫做指针变量
	////  *说明 pa是指针变量
	////int 说明 pa执行的对象是int 类型的
	//char ch = 'w';
	//char *pc = &ch;
	//printf("%p\n", &ch);
	//printf("%p\n"  , &pc);




	//找地址
	//int a = 10;

	//int* pa = &a;
	//*pa = 20;//  * 解引用操作 *pa就是通过pa里面的地址找到a

	//return 0;  
//}
//#include <stdio.h>
//#include <string.h>

	//int main()
	//{
	//	/*char arr[] = { 'b' , 'i' , 't' };*/
	//	char arr[] = { 'b' , 'i' , 't' };
	//	printf("%d\n", strlen(arr));
	//	return 0;
	//}



//求两个整数的较大值

//
//
//#include<stdio.h>


//错误示范
// 
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (0 == (i % 2))
//		{
//			i++;
//			continue;
//		}
//		else
//		{
//			printf("%d\n", i);
//			i++;//i += 2;
//		}
//		
//	
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d\n", i);
//	}
//	
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	//在while循环中，break用于永久终止循环
//	//在while循环中，continue上的作用是跳过本次循环continue后边的代码
//	//直接去 判断部分，看是否进行下一次循环
//	while (i <= 10)
//	{ 
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//EOF    end of file 文件的结束标志
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	//ctrl+z - getchar 就读取结束
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//
//}
