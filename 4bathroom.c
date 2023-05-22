#include "room.h"
int bathroom()
{
	//화장실
	CLR;
	_getch();
	printf("화장실까지 굳이굳이 잠가 놓는 이유가 뭘까? 진짜 정신 나갈거 같아...\n\n\n");
	_getch();
	while (1)
	{
		int bathChoose;
		//화장실 아스키아트..? 있을 시 넣을 것
		printf("거울은 어제 새로 맞춘 것처럼 반짝이고, 바닥 타일 하나하나가 빛을 뿜고 있다...\n");
		printf("우리 왕국 화장실에선 감히 상상도 할 수 없는 광경이다.\n");
		printf("그리고 저기 녹 제거제도 보인다!\n\n");
		printf("1) 화장실 수납장  2) 녹 제거제  3) 거실로 나가기\n");
		printf(">> ");
		scanf_s("%d", &bathChoose);
		while (1)
		{
			if (bathChoose == 1)//화장실 수납장
			{
				//화면 전환 있을 시
				CLR;
				if (item[10] == 1)
				{
					printf("칫솔, 비누, 용 비늘용 바디워시...욕실 용품들이 칸 별로 분류되어 널부러져 있다.\n");
					_getch();
					printf("열쇠가 붙어있던 곳에는 두 자리 번호 '2 8'이 적혀 있다.\n");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("칫솔, 비누, 용 비늘용 바디워시...욕실 용품들이 칸 별로 정리되어 있다.\n");
					_getch();
					printf("구석에 테이프로 열쇠가 붙여져 있다...? '옥상'이라고 적혀져 있네?\n");
					_getch();
					printf("심지어 열쇠를 뗀 곳에 두 자리 번호가 적혀 있다. 2 8이라...\n");
					_getch();
					printf("열쇠는 챙겨가야겠다.");
					_getch();
					CLR;
					item[10] = 1;
					break;
				}
			}
			else if (bathChoose == 2)//녹 제거제
			{
				//화면전환222
				CLR;
				if (item[1] == 1 && item[6] != 1)//유리컵 有, 계량 스푼 無
				{
					printf("컵은 지하실에서 가져온 걸 쓰면 되겠지? 그런데 계량할 도구가 없다.");
					_getch();
					CLR;
					break;
				}
				else if (item[1] != 1 && item[6] == 1)
				{
					printf("계량 스푼이면 용량 맞추느라 스트레스 받을 일은 없겠네. 근데 약을 담을 컵이 없다.");
					_getch();
					CLR;
					break;
				}
				else if (item[1] == 1 && item[6] == 1)
				{
					printf("지하실에서 가져온 컵이랑, 용량 맞출 계량 스푼...필요한 건 다 있는 것 같다.\n");
					printf("대충 물 받고 휘저어주면...완성이다! 조심해서 들고 가자.\n\n");
					_getch();
					CLR;
					item[8] = 1;
					break;
				}
				else
				{
					printf("녹을 제거할 약을 만들어야 할텐데, 가지고 있는 것 중에선 쓸 만한 게 하나도 없다...");
					_getch();
					CLR;
					break;
				}
				if (item[8] == 1)
				{
					printf("약을 만들다가 바닥이 더러워졌다. 뭐 용이 알아서 치우겠지!");
					_getch();
					CLR;
					break;
				}
			}
			else if (bathChoose == 3)//거실로 나가기
			{
				printf("거실로 돌아가야겠다.");
				_getch();
				CLR;
				return 0;
			}
		}
	}
}