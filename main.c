#include "main.h"

int main()
{
	int c;
	init();
	titleOpen();
	scanf_s("%d", &c);
	while (1)
	{
		if (c == 1)//게임시작
		{
			CLR;
			introPlay();//인트로
			cellar();//지하실 입장
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
				main();
			}
			else if (infoChoose == 2)
			{
				CLR;
				introPlay();
				cellar();
			}
		}
		else if (c == 3)//게임종료
		{
			exit(0);
		}
		else//선택지 이외의 숫자를 입력했을 경우
		{
			CLR;
			main();
		}
	}
		CLR;
	return 0;
}

