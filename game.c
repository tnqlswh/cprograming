#include "game.h"

void titleOpen()
{
	printf("\n\n\n\n\n\n\n");
	printf("                               10분 용사\n\n\n\n\n\n\n\n\n\n");
}

int menu()
{
	printf("                               1. 게 임 시 작 \n");
	printf("                               2. 조 작 법 \n");
	printf("                               3. 게 임 종 료 \n");
}

void infoDraw()
{
	printf("원하는 행동의 번호를 입력해서 진행합니다! 스토리 진행은 아무 키나 누르면 진행됩니다~\n\n");
	printf("1. 메인화면으로 돌아가기\n");
	printf("2. 바로 게임 시작하기\n\n");
	printf("원하는 행동의 번호를 입력하세요: ");
}

void introPlay()
{
	Sleep(1000);
	printf("오늘은 왕자의 결혼식날.\n");
	_getch();
	printf("왕자와 공주의 결혼식을 축하하기 위해 왕국의 백성들이 모두 모여 성대한 축제를 열었다...!\n");
	_getch();
	printf("이윽고 해가 저물고 축제 시간이 되자, 아리따운 공주님과 멋진 왕자님이 입...장...을 해야 하는데??\n");
	_getch();
	CLR;
	printf("왕자: '으아악!죄송합니다!!알람을 맞춰놓는다는게 그만!!'");
	_getch();

}