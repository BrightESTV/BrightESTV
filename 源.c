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
//    printf("最大值=%d\n", f);
//    return 0;
//}
//#include <stdio.h>
//#include <string.h> // strlen函数引用<string.h> ,strlen 用于计算字符串的大小（个数）
//#include <windows.h>//用Sleep函数，需引用<windows.h>

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
//        Sleep(1000);//1000毫秒
//        system("cls");//system执行系统命令的函数 -  cls清空屏幕
//
//    }
//
//    return 0;
//}
//字符串 字符组 有\0 (终止符)
//数字串无\0,
//== 不能用来比较两个字符串是否相当，应该使用一个库函数（strcmp）
//例如  stccmp(函数1，函数2) == 0 如果1>2 ,输出0；如果1<2 输出非0数值
//在scanf中数组不用&
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
//     { printf("买彩票:%d\n",money);
//      
//      money++;
//      }
//      if (money >= 10055)
//      printf("下海\n");
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
// 比较大小，我想写个函数，但是失败了
//头文件必须引用对，否则全是错误
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
// %取余数
//辗转相除法
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
//普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）。
//世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）
//试除法
//sqrt 开方 需要引用<math.h>
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
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j<=sqrt(i);j++)
//			if (i%j == 0)
// 			{  
//				break;
//			}
//		if (j>sqrt(i))
//			{
//				count++;
//				printf("%d\n",i);
//			}
//		
//	}
//	printf("\ncount = %d\n",count);
//
//	return 0;
//}
//乘法表
//int main()
//{
//    int a = 0;
//    for (a = 1; a <= 9; a++)
//    { 
//        int b = 1;
//        for (b = 1; b <= a; b++)
//        {
//            printf("%d*%d=%-2d ",a,b,a*b);
//        }
//        printf("\n");
//    }
//
//
//
//    return 0;
//}
//判断数值大小
//int main()
//{
//	int a[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max = a[0];
//	int j = 0;
//	int s = sizeof(a) / sizeof(a[0]);
//	for (j = 0; j <= s; j++)
//	{ 
//		if (a[j] > max)
//		{
//			max = a[j];
//		}
//		
//	}
//	printf("max = %d", max);
//	return 0;
//}
//猜数字游戏
//menu 菜单函数
//0x代表十六进制
//rand 产生的随机数最大值为32767
//时间戳 当前计算机的时间-计算机的起始时间（1970.1.1.0：0） = （xxxxx）秒
//NUll 空指针
//猜字谜的小游戏
//srand 引用需要<stdlid.h>
//引用时间戳需要<time.h>
//srand((unsigned int) time (NULL));
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("*******************************************\n");
//	printf("***          play 1  ;   exit 0         ***\n");
//	printf("*******************************************\n");
//	
//}
//void game()
//{
//	printf("give a number\n");
//	int ret = 0;
//	int a = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("please input a  number>: \n");
//		scanf_s("%d",&a);
//		if (a > ret)
//		{
//			printf("bigger\n");
//		}
//		else if (a < ret)
//		{
//			printf("smaller\n");
//		}
//		else
//		{
//			printf("good gob\n");
//			break;
//		}
//
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned  int)time(NULL));
//	do              //输出菜单，选择是否进行下一步
//	{
//		menu();
//		printf("please input>: ");
//		scanf_s("%d",&input);
//		switch (input)
//		{ 
//		case 1:
//			game();
//		    break;
//	    case 0:
//		    printf("quit ganmes\n");
//		    break;
//		default:
//			printf("false\n");
//			break;
//		}
//	} while (input);
//
//
//	return 0;
//}
//shutdown -s -t 60
//-t设置时间关机
//shutdown -s 关机
//shutdown -a 停止关机
#include <string.h>
#include <stdlib.h>
int main()
{
	char arr[20] = {0};
	system("shutdown -s -t 6000");
again:
	printf("电脑将在一分钟后关机，请输入“我是猪”停止程序。请输入>: \n");
	scanf_s("%s",arr);
	if (strcmp(arr, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else 
	{
		goto again;
		
	} 

	return 0;
}