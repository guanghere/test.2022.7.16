#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//输入密码 超过3次警告 超过5次强制退出

//int main()
//{
//	int a = 0;
//
//	//给一个假设的密码
//	char password[20] = { 0 };
//
//	for (a = 0; a < 5; a++)
//	{
//		printf("请输入密码！\n");
//		scanf("%s", password);
//		//password不能直接和密码比较   要使用一个专门的函数		strcmp	进行比较
//		//srrcmp比较的是两个内容的ASCII码值
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else if (a == 2)
//		{
//			printf("还剩两次机会！\n");
//		}
//		else
//		{
//			printf("密码输入错误！\n");
//		}
//	}
//	if
//		(a == 5)
//	{
//		printf("强制退出！\n");
//	}
//	return 0;
//}


//写一个猜数字游戏
//1.自动产生一个1到100之间的数
//2.猜数字
// a	猜对了，恭喜你
// b	猜错了，会告诉你猜大了还是猜小了
// 3.可以一直玩  直到自己选择结束

void menu()
{
	printf("##############################\n");
	printf("######   1.play	       #######\n");
	printf("######	 0.exit	       #######\n");
	printf("##############################\n");
}
int main()
{
	//先来一个do while 循环		先执行 后判断
	int input = 0;
	do
	{
		menu();	//打印菜单
		//开始执行程序
		printf("请选择！\n");
		scanf("%d", &input);	//输入一个值 /选择一个值
		switch(input)
		{
		case 1:
			printf("猜数字!\n");
			break;
		case 2:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误,重新选择!\n");
			break;
		}
				//		switch 走完后 会在do while 的while 进行判断！
				//		

	} while (input);


	return 0;
}
