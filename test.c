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
//    char arr2[] = { 'a','b','c',};//\t水平制表符
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
//    //enum 枚举常量
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
// 第一个买彩票程序
//int main()
//{
//	int input = 0;
//	printf("欢迎来到英雄联盟\n");
//	printf("你想开始吗？(0/1) >:");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("好好学习\n");
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
//		printf("回家 = %d\n",money);
//		money++;
//	}
//	if (money >= 44)
//		printf("西瓜:\n");
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
// 写的第二个买彩票的，比较OK
// scanf（vs2019记得加 _s ）取地址，可以获得你输的数字
//int main()    
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;       
//	int d = 0;
//	printf("you wang to buy a lottery ticket");
//	printf("so please you input follow number (0/1)>：");
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
// 写的第三个买彩票的，能运行但出现了bug，还修不了
//getchar() 获取字符

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
//		printf("请输入你的号码(四位数)");
//		int b = 0;
//		scanf_s("%d",&b);
//		if (b >= 1500 && b <= 2000 )
//		{
//			printf("迎娶白富美");
//		}
//		else
//		{
//			printf("密码错误\n");
//			printf("想要打工吗（Y / N）");
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
// for 循环 里禁止改变变量，使用前闭后开的写法如 i<=9 写成 i <10
// for循环 赋值 判断 调整 都可以省略
// 无的结果      死循环（恒为真）
//第一个for循环
//int main()
//{
//    int a = 0;
//    int b = 0;
//    for (a = 0; a <= 10; a++)
//    {
//        for (b = 0; b <= 3; b++)
//        {
//            printf("买彩票%d\n",b);
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
















