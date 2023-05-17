#include "game.h"

int keyControl()
{
	char temp = getch();

	if (temp == 'w' || temp == 'W')
		return UP;
	else if (temp == 'a' || temp == 'A')
		return LEFT;
	else if (temp == 's' || temp == 'S')
		return DOWN;
	else if (temp == 'd' || temp == 'D')
		return RIGHT;
	else if (temp == ' ')
		return SUBMIT;
}

void titleOpen()
{
	printf("\n\n\n\n");
	printf("타이틀의논할것..ㅋ");
}

int menu()
{
	int x = 24;
	int y = 12;
	gotoxy(x - 2, y);//-2는 > 출력을 위한 자리마련
	printf("> 게 임 시 작 ");
	gotoxy(x, y + 1);
	printf(" 조 작 법 ");//추후에 설명어쩌구라던가..로 바꿀것.
	gotoxy(x, y + 2);
	printf("게 임 종 료 ");
	while (1)
	{
		int n = keyControl();
		switch (n)
		{
		case UP:
		{
			if (y > 12)
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, --y);
				printf(">");
			}
			break;
		}

		case DOWN:
		{
			if (y < 14)
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break;
		}
		case SUBMIT:
		{
			return y - 12;
		}
		}
	}
}

void infoDraw()
{
	system("cls");
	printf("\n\n");
	printf("                       [ 조 작 법 ]\n\n");
	printf("                    이 동 : W, A, S, D\n");
	printf("                    선 택 : 스 페 이 스 바\n\n\n\n\n\n");
	printf("  스 페 이 스 바 를  누 르 면  메 인 화 면 으 로  이 동 합 니 다.");

	while (1)
	{
		if (keyControl() == SUBMIT)
		{
			break;
		}
	}
}

void introPlay()
{
	char ch;
	printf("\npress enter to continue");
	while ((ch = getchar()) != '\n'){}//엔터치면 다음 텍스트 나옴
	printf("오늘은 왕자의 결혼식날.");
	while ((ch = getchar()) != '\n'){}
	printf("왕자와 공주의 결혼식을 축하하기 위해 왕국의 백성들이 모두 모여 성대한 축제를 열었다...!");
	while ((ch = getchar()) != '\n') {}
}