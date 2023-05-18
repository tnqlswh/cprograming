#include "main.h"

int main()
{
	int c;
	init();
	while (1)
	{
		titleOpen();
		menu();
		printf("실행하길 원하는 번호를 입력하세요: ");
		scanf_s("%d", &c);
		while (1)
		{
			if (c == 1)
			{
				CLR;
				introPlay();
				return 0;
			}
			else if (c == 2)
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
					return 0;
				}
			}
			else if (c == 3)
			{
				exit(0);
			}
		}
		system("cls");
	}
	return 0;
}