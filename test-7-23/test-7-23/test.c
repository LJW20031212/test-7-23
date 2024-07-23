#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr1 [] = "123";//int arr1 [] = "123";不行
//	int arr2[] = { 1,2,3,4};
//	char arr3[] = { '1','2','3','\0'};
//	printf("%s\n", arr1);
//	printf("%d\n", arr2[3]);//char arr2[] = { 1,2,3,4};也可以但不建议
//	//printf("%d\n", arr2);//不行
//	//printf("%s\n", arr2);//不行
//	//printf("%s\n", arr2[3]);//不行
//	printf("%s\n", arr3);
//	printf("%d\n", arr3[2]);//int arr3[] = { '1','2','3','\0'};也可以但不建议
//	printf("%d\n", arr1[2]);
//	printf("%d\n", 'c');
//	printf("%d\n", '3');
//	return 0;
//}
#include<string.h>
int main()
{
	//char arr1[] = "123";
	//char arr2[] = { '1','2','3','\0'};
	//printf("%d\n", strlen(arr1));//--strlen是用来计算字符串长度的 strlen为库函数使用时需要调用头文件#include<string.h>
	//printf("%d\n", strlen(arr2));
	//return 0
	printf("c:\\test\\32\\test.c\n");
	printf("%c\n", 'a');
	printf("%c\n", '\'');
	printf("%s\n", "123");
	printf("%s\n", "\"");
	printf("%d\n",strlen("c:\test\32\test.c"));
	printf("c:\test\32\test.c");
	printf("\32\n");//\32--32是两个八进制数字 32作为八进制代表的那个十进制数字，作为ASCII码值，对应的字符 \32--> 10进制26 -->作为ASCII码值代表的字符
	printf("\132\n");//132(八进制)-->90(十进制)-->作为ASCII码值代表的字符为Z     
	//ps:  1 3 2 
	//     1*8^2  +  3*8^1  + 2*8^0  = 90        -->     Z
	printf("\x61\n");// 同上
	return 0;
}