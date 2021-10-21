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