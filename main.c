#include "main.h"

int main()
{
	int c;
	init();
	while (1)
	{
		titleOpen();
		menu();
		printf("실행하길 원하는 번호를 입력해주세요: ");
		scanf_s("%d", &c);
		while (1)
		{
			if (c == 1)//게임시작
			{
				CLR;
				introPlay();//인트로
				cellar();//지하실 입장
				return 0;
			}
			else if (c == 2)//조작법
			{
				CLR;
				infoDraw();
				int infoChoose;
				scanf_s("%d", &infoChoose);
				if (infoChoose == 1)
				{
					CLR;
					break;
				}
				else if (infoChoose == 2)
				{
					CLR;
					introPlay();
					cellar();
					break;//return 0 써야될지 break 써야될지... 일단 다 만들어보고 나서 플레이 해보고 결정.
				}
			}
			else if (c == 3)//게임종료
			{
				exit(0);
			}
			else//선택지 이외의 숫자를 입력했을 경우
			{
				CLR;
				break;
			}
		}
		CLR;
	}
	return 0;
}