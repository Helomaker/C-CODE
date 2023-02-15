# C语言学习记录

### 2月13日学习记录

```c
#include<stdio.h>
int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
}
int main()//附加函数的加法计算
{
	int num1;
    int num2;
    int num;
    scanf("%d%d", &num1, &num2);
    num = Add(num1, num2);
    printf("%d\n",num);
	return 0;
}	
```



git 的命令及其作用

![image-20230213135753709](C:\Users\houqi\AppData\Roaming\Typora\typora-user-images\image-20230213135753709.png)







##### 数组---- 一组相同类型元素的集合

数组不完全初始化，剩余的默认为零

```c
//数组
#include<stdio.h>
int main()
{
	//数组  一组相同类型的元素的集合
	//10个整形1-10存起来
	//数组是通过下标来访问的
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//下标为------- 0,1,2,3,4,5,6,7,8,9
	//char ch[5] = { 'a','b','c' };//不完全初始化，剩余默认为0
	//下标为-------   0,1,2,3,4,5,
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	
	return 0;
}
```

![image-20230213151444043](C:\Users\houqi\AppData\Roaming\Typora\typora-user-images\image-20230213151444043.png)



##### 操作符

###### 算术操作符：                +  -   *  /   %

​           

| 左移操作符 | 移动二进制位 |
| :--------: | :----------: |
|            |              |

![image-20230213161752659](C:\Users\houqi\AppData\Roaming\Typora\typora-user-images\image-20230213161752659.png)

######  移位操作符：>>      <<         

![、](C:\Users\houqi\AppData\Roaming\Typora\typora-user-images\image-20230213162654062.png)

###### 位操作符

| &按位与 | \|按位或 | ^按位异或 |
| ------- | -------- | --------- |

sizeof是单目操作符，sizeof(a);中<u>()</u>可以省略；但是计算sizeof(int)  <u>数据类型</u> 时不可省略
sizeof   计算的是数组的总大小，单位是字节







###### 计算机中负数计算

原码、反码、补码
%d 打印出来是原码
负数在内存中存储的是补码

补：正整数中（原码、反码、补码相同）

![image-20230213173819238](C:\Users\houqi\AppData\Roaming\Typora\typora-user-images\image-20230213173819238.png)



###### 下标引用操作符 []

![image-20230215075250498](C:\Users\houqi\AppData\Roaming\Typora\typora-user-images\image-20230215075250498.png)



###### 函数调用操作符 ()

![image-20230215075540662](C:\Users\houqi\AppData\Roaming\Typora\typora-user-images\image-20230215075540662.png)



##### 关键字：C语言提供的，不能自己创造。

![image-20230215080033472](C:\Users\houqi\AppData\Roaming\Typora\typora-user-images\image-20230215080033472.png)



###### auto

![image-20230215080312321](C:\Users\houqi\AppData\Roaming\Typora\typora-user-images\image-20230215080312321.png)

###### register

![image-20230215081612382](C:\Users\houqi\AppData\Roaming\Typora\typora-user-images\image-20230215081612382.png)
