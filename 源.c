//#include <stdio.h> 
//#include <string.h>
//int Max(int a, int b) {
//    if (a > b)
//        return a;
//    else
//        return b;
//
//}
//
//int main() {
//    int c = 0;
//    int d = 0;
//    int f = 0;
//    scanf_s("%d %d", &c, &d);
//    f = Max(c, d);
//
//    printf("���ֵ=%d\n", f);
//    return 0;
//}
//#include <stdio.h>
//#include <string.h> // strlen��������<string.h> ,strlen ���ڼ����ַ����Ĵ�С��������
//#include <windows.h>//��Sleep������������<windows.h>

//int main() 
//{
//    char arr1[] = "welcome to league of legends";
//    char arr2[] = "############################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//
//        left++;
//        right--;
//        Sleep(1000);//1000����
//        system("cls");//systemִ��ϵͳ����ĺ��� -  cls�����Ļ
//
//    }
//
//    return 0;
//}
//�ַ��� �ַ��� ��\0 (��ֹ��)
//���ִ���\0,
//== ���������Ƚ������ַ����Ƿ��൱��Ӧ��ʹ��һ���⺯����strcmp��
//����  stccmp(����1������2) == 0 ���1>2 ,���0�����1<2 �����0��ֵ
//��scanf�����鲻��&
//#include <stdio.h>
//#include <string.h>
////
//int main()
//    {  
//    
//        int money = 0;
//        
//    while
//     (money <= 10000)  
//     { printf("���Ʊ:%d\n",money);
//      
//      money++;
//      }
//      if (money >= 10055)
//      printf("�º�\n");
//      else 
//      printf("stop\n");
//      
//        
//
//    return 0;
//  }

//int main()
//{  int a = 0;
//   int b = 0;
//   int c = 0;
//   int d ;
//   scanf("%d %d %d",&a,&b,&c);
//   if(a < b)
//   {  d = a;
//       a = b;
//       b = d;
//   }
//  
//   if(a < c)
//   {  d = a;
//      a = c;
//      c = d;
//   }
//    if(b < c) 
//   {  d = b;
//     b = c;
//      c = d;
//   }
//   printf("%d>%d>%d\n",a,b,c);
//
//
//  return 0;
//}
// �Ƚϴ�С������д������������ʧ����
//ͷ�ļ��������öԣ�����ȫ�Ǵ���
#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf_s("%d %d %d", &a, &b, &c);
//    if (a <= b)
//    {
//       int d = a;
//        a = b;
//        b = d;
//    }
//    if (a <= c)
//    {
//       int d = a;
//        a = c;
//        c = d;
//    }
//    if (b <= c)
//    {
//       int d = b;
//        b = c;
//        c = d;
//    }
//    printf("%d>%d>%d", a, b, c);
//}
// %ȡ����
//շת�����
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d %d",&a,&b);
//	while (a % b)
//	{
//		c = a % b;
//		b = a;
//		a = c;
//		printf("%d", c);
//	}
//
//  
//}
//��ͨ���꣺���������4�ı������Ҳ���100�ı����ģ�Ϊ���꣨��2004�ꡢ2020��Ⱦ������꣩��
//�������꣺����������������ģ�������400�ı����������꣨��1900�겻�����꣬2000�������꣩
//�Գ���
//sqrt ���� ��Ҫ����<math.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year%4 == 0) && (year % 100 != 0)) || (year%400 == 0))
//			printf("%d\n",year);
//		count++;
//	}
//
//
//	printf(" count =%d",count);
//
//	return 0;
//}
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		for (j = 2; j<=sqrt(i);j++)
			if (i%j == 0)
 			{  
				break;
			}
		if (j>sqrt(i))
			{
				count++;
				printf("%d\n",i);
			}
		
	}
	printf("\ncount = %d\n",count);

	return 0;
}