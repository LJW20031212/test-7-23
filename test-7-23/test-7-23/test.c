#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr1 [] = "123";//int arr1 [] = "123";����
//	int arr2[] = { 1,2,3,4};
//	char arr3[] = { '1','2','3','\0'};
//	printf("%s\n", arr1);
//	printf("%d\n", arr2[3]);//char arr2[] = { 1,2,3,4};Ҳ���Ե�������
//	//printf("%d\n", arr2);//����
//	//printf("%s\n", arr2);//����
//	//printf("%s\n", arr2[3]);//����
//	printf("%s\n", arr3);
//	printf("%d\n", arr3[2]);//int arr3[] = { '1','2','3','\0'};Ҳ���Ե�������
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
	//printf("%d\n", strlen(arr1));//--strlen�����������ַ������ȵ� strlenΪ�⺯��ʹ��ʱ��Ҫ����ͷ�ļ�#include<string.h>
	//printf("%d\n", strlen(arr2));
	//return 0
	printf("c:\\test\\32\\test.c\n");
	printf("%c\n", 'a');
	printf("%c\n", '\'');
	printf("%s\n", "123");
	printf("%s\n", "\"");
	printf("%d\n",strlen("c:\test\32\test.c"));
	printf("c:\test\32\test.c");
	printf("\32\n");//\32--32�������˽������� 32��Ϊ�˽��ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ� \32--> 10����26 -->��ΪASCII��ֵ������ַ�
	printf("\132\n");//132(�˽���)-->90(ʮ����)-->��ΪASCII��ֵ������ַ�ΪZ     
	//ps:  1 3 2 
	//     1*8^2  +  3*8^1  + 2*8^0  = 90        -->     Z
	printf("\x61\n");// ͬ��
	return 0;
}