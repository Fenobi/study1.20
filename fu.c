#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int i;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ���");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������󣬵�½ʧ��\n");
//	}
//	return 0;
//}

//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "wodemingzijiaofuqingyun";
//	char arr2[] = "***********************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//	}
//	if (left == right)
//	{
//		printf("%s\n", arr1);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while ((i = getchar()) != EOF)
//	{
//		if (i < '0'|| i>'9')
//		{
//			continue;
//		}
//		putchar(i);
//	}
//	return 0;
//}


////�����������Ӵ�С����
//int main()
//{
//	int a=0, b=0, c=0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < c)
//	{
//		//��������������
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	for (; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int max = 0;
//	if (a > b)
//	{
//		max = b;
//	}
//	else
//	{
//		max = a;
//	}
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("���Լ��Ϊ��%d", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//int main()
//{
//	int m, n;
//	int t = 0;
//	scanf("%d %d", &m, &n);//24 18
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ��Ϊ��%d", n);
//	//��С������ = ��m*n/���Լ����
//	return 0;
//}

