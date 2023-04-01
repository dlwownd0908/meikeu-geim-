#include "main.h"	

// & 이름 = 앤퍼센드
// \n = 줄 넘기기


int select_resister(int  star) {
	return star + 1;
}
int zero_resi() {
	return 0;
}

int main1() {
	char sword[8][30] = {
		"주먹도끼 " , "겐지검 비슷한 검" , "그냥 롱소드" , "멍청한 검" , "이건 뭐지" , "저 거슬리는 센즈는 뭐야" , "와 ㅅㅔㄴㅈㅡ" , "뇌절 적정선 ______________"
	};
	/*srand(time(NULL));
	printf("%s \n" , sword[3]);

	int a = rand() % 10;
	printf("랜덤 함수 :    --> %d", a);

	if (a <= 10){
		printf("성공");
	}
	else {
		printf("강화 실패");
	}*/
	srand(time(NULL));
	
	int x;
	int a = rand() % 100;
	int star = 0;

	goto lobby;

end:
	Sleep(3000);
	system("cls");

	printf("축하합니다! 그 확률을 뚫고 뇌절에 도달하셨군요 !\n더이상 쓰기가 귀찮으니까 대충 여기서 주접은 끝내도록 하죠 그럼 2만!\n\n\n\n\n\n\n\n\n");


lobby:
	Sleep(1000);
	system("cls");
	printf("\n검 강화하ㅏㅏㅏㅏㅏㅏㅏㅏ기 1\n");
	printf("sword 레지스터 is 1! sword sell is 0!\n");
	
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

		printf("검은 %s입니다 !", sword[star]);
		Sleep(1000);
		system("cls");
		goto lobby;
	}
	else if (x == 0) {
		//판매
	}
	else {
		system("cls");
		printf("\n똑바로 눌러라 **놈아\n");
		Sleep(700);
		goto lobby;
	}


}

