#include "main.h"	

// & �̸� = ���ۼ���
// \n = �� �ѱ��


int select_resister(int  star) {
	return star + 1;
}
int zero_resi() {
	return 0;
}

int main1() {
	char sword[8][30] = {
		"�ָԵ��� " , "������ ����� ��" , "�׳� �ռҵ�" , "��û�� ��" , "�̰� ����" , "�� �Ž����� ����� ����" , "�� ���Ĥ�����" , "���� ������ ______________"
	};
	/*srand(time(NULL));
	printf("%s \n" , sword[3]);

	int a = rand() % 10;
	printf("���� �Լ� :    --> %d", a);

	if (a <= 10){
		printf("����");
	}
	else {
		printf("��ȭ ����");
	}*/
	srand(time(NULL));
	
	int x;
	int a = rand() % 100;
	int star = 0;

	goto lobby;

end:
	Sleep(3000);
	system("cls");

	printf("�����մϴ�! �� Ȯ���� �հ� ������ �����ϼ̱��� !\n���̻� ���Ⱑ �������ϱ� ���� ���⼭ ������ �������� ���� �׷� 2��!\n\n\n\n\n\n\n\n\n");


lobby:
	Sleep(1000);
	system("cls");
	printf("\n�� ��ȭ�Ϥ����������������� 1\n");
	printf("sword �������� is 1! sword sell is 0!\n");
	
	scanf("%d", &x);

	if (x == 1) {
		if (a - star * 5 >= 0) {
			star = select_resister(star);
		}
		else {
			star = zero_resi();
		}
		if (star == 8) {
			goto end;
		}

		printf("���� %s�Դϴ� !", sword[star]);
		Sleep(1000);
		system("cls");
		goto lobby;
	}
	else if (x == 0) {
		//�Ǹ�
	}
	else {
		system("cls");
		printf("\n�ȹٷ� ������ **���\n");
		Sleep(700);
		goto lobby;
	}


}

