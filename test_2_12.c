#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//printf("%d\n", strlen("c:\test\328\test.c"));\\strlen--�����ַ�������
//ת���ַ���̷��ǿC����40ҳ
//printf("(Are you OK\?\?)");
//  printf("c:\\te\a   st\ves\"\\t.c\?\a\a");//\tΪת���ַ�
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	/*printf("hello world\n");*/
	//return 0;

//ע�����������͸��Ӵ����
//     ��//����C++��ע�ͷ��   /**/��C���Ե�ע�ͷ��
//      C��ע�Ͳ�֧��Ƕ��



//ѡ�����
//int main()
//{
//	int input = 0;//�����ֵ
//	printf("�������:>");
//	printf("��Ҫ�ú�ѧϰ��(0/1)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}



//ѭ�����
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//			printf("д����:%d\n",line);
//			line++;
//	}
//	if (line == 30000)
//	{
//		printf("great offer\n");
//	}	
//	return 0;
//}


//����

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
	//�ú����ķ�ʽ���
	sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}