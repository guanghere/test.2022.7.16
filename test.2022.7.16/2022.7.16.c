#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//�������� ����3�ξ��� ����5��ǿ���˳�

//int main()
//{
//	int a = 0;
//
//	//��һ�����������
//	char password[20] = { 0 };
//
//	for (a = 0; a < 5; a++)
//	{
//		printf("���������룡\n");
//		scanf("%s", password);
//		//password����ֱ�Ӻ�����Ƚ�   Ҫʹ��һ��ר�ŵĺ���		strcmp	���бȽ�
//		//srrcmp�Ƚϵ����������ݵ�ASCII��ֵ
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else if (a == 2)
//		{
//			printf("��ʣ���λ��ᣡ\n");
//		}
//		else
//		{
//			printf("�����������\n");
//		}
//	}
//	if
//		(a == 5)
//	{
//		printf("ǿ���˳���\n");
//	}
//	return 0;
//}


//дһ����������Ϸ
//1.�Զ�����һ��1��100֮�����
//2.������
// a	�¶��ˣ���ϲ��
// b	�´��ˣ��������´��˻��ǲ�С��
// 3.����һֱ��  ֱ���Լ�ѡ�����

void menu()
{
	printf("##############################\n");
	printf("######   1.play	       #######\n");
	printf("######	 0.exit	       #######\n");
	printf("##############################\n");
}
int main()
{
	//����һ��do while ѭ��		��ִ�� ���ж�
	int input = 0;
	do
	{
		menu();	//��ӡ�˵�
		//��ʼִ�г���
		printf("��ѡ��\n");
		scanf("%d", &input);	//����һ��ֵ /ѡ��һ��ֵ
		switch(input)
		{
		case 1:
			printf("������!\n");
			break;
		case 2:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����,����ѡ��!\n");
			break;
		}
				//		switch ����� ����do while ��while �����жϣ�
				//		

	} while (input);


	return 0;
}
