//#include <stdio.h>

//\\int main()
  //  printf("hello world\n");
   // return 0;
//}/


//#include <stdio.h> 


// int main()
 //{    
 //     int m3 = 0;
 //    int num2 = 0;
 //    int bbb = 0;
 //     scanf_s("%d%d",&num3,&num2);
 //    bbb = num3 + num2; 
  //   printf("bbbb = %d\n", bbb);
  //     return 0;
 // }


#include <stdio.h>



//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c',};//\tˮƽ�Ʊ��
//                    
//     
//
//
//    printf("%d\n", strlen(arr1));
//    printf("%d\n", strlen(arr2));
//   
//    
//        
//
//
//    return 0;
//
//
//    //enum ö�ٳ���
//}
//
//int Add(int x, int y
//)
//{
//	int b = x + y;
//	return b;
//}
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int z = 0;
//	z = Add(num1, num2);
//	
//	
//	printf("%d\n", z
//	);
//
//	return 0;
//}
// ��һ�����Ʊ����
//int main()
//{
//	int input = 0;
//	printf("��ӭ����Ӣ������\n");
//	printf("���뿪ʼ��(0/1) >:");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("�ú�ѧϰ\n");
//	else
//		printf("go back to study\n");
//
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	printf("jia\n");
//	while (money <= 10)
//	{
//		printf("�ؼ� = %d\n",money);
//		money++;
//	}
//	if (money >= 44)
//		printf("����:\n");
//	else
//		printf("stop\n");
//	return 0;
//}
//int main()
//{
//    extern int ggg;
//    printf("ggg = %d\n",ggg);
//
//    return 0;
//}
// д�ĵڶ������Ʊ�ģ��Ƚ�OK
// scanf��vs2019�ǵü� _s ��ȡ��ַ�����Ի�����������
//int main()    
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;       
//	int d = 0;
//	printf("you wang to buy a lottery ticket");
//	printf("so please you input follow number (0/1)>��");
//	scanf_s("%d", &a);
//	if (a == 1)
//	{   
//		printf("welcome  the hell,so you wang to escape here (0/1)>:");
//		scanf_s("%d",&b);
//		if (b == 1)
//		{
//			printf("wow,you are quite obstinate guy.Finally,ask again stick or not(0/1)>:");
//			scanf_s("%d", &c);
//			if (c == 1)
//			{
//				printf("wait for me,I can't write about the game programming language,you are luck");
//			}
//			else
//				printf("nothing happened");
//		}
//		else
//		{
//			printf("ok,you escaped in time,so you want to study well(0/1)>:");
//			scanf_s("%d",&d);
//			if (d == 1)
//			{
//				printf("good job");
//			}
//			else
//				printf("loser");
//		}
//	    
//
//	}
//	else
//		printf("welcome heaven");
//
//
//
//	return 0;
// }
// д�ĵ��������Ʊ�ģ������е�������bug�����޲���
//getchar() ��ȡ�ַ�

//int main()   
//{             
//	int a = 0;
//	
//	int c = 0;
//	int d = 0;
//	printf("you wang to buy lottery ticket(Y/N)\n");
//	a = getchar();
//	if (a == 'Y')
//	{
//		
//		printf("��������ĺ���(��λ��)");
//		int b = 0;
//		scanf_s("%d",&b);
//		if (b >= 1500 && b <= 2000 )
//		{
//			printf("ӭȢ�׸���");
//		}
//		else
//		{
//			printf("�������\n");
//			printf("��Ҫ����Y / N��");
//				c = getchar();
//			if (c == 'Y')
//			{
//				printf("want yo go ahead(Y/N)");
//				d = getchar();
//				if (d == 'Y')
//				{
//					printf("a");
//				}
//				else
//					printf("n");
//			}
//			/*else
//			{
//				printf("huijia");
//			}*/
//		}
//	}
//	else
//		printf("go home");
//
//
//	return 0;
//}
// for ѭ�� ���ֹ�ı������ʹ��ǰ�պ󿪵�д���� i<=9 д�� i <10
// forѭ�� ��ֵ �ж� ���� ������ʡ��
// �޵Ľ��      ��ѭ������Ϊ�棩
//��һ��forѭ��
//int main()
//{
//    int a = 0;
//    int b = 0;
//    for (a = 0; a <= 10; a++)
//    {
//        for (b = 0; b <= 3; b++)
//        {
//            printf("���Ʊ%d\n",b);
//        }
//    }
//
//
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	for (a = 1; a<10; a++)
//	{
//		b *= a;
//		printf("%d\n",b);
//	}
//	printf("%d\n",b);
//
//	return 0;
//}
#include <string.h>
#include <windows.h>
int main()
{
	char a[] = "welcome to league of legends ";
	char b[] = "#############################";
	int right = strlen(a)-1;
	int left = 0;

	while (left >= right)
	{
		a[left] = b[left];
		a[right] = b[right];
		printf("%s\n", b);
		left++;
		right--;
		Sleep(1000);

	}


	return 0;
}
















