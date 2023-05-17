#include "main.h"

int main()
{
	init();
	while (1)
	{
		titleOpen();
		int menuCode = menu();
		if (menuCode == 0)
		{
			introPlay();
		}
		else if (menuCode == 1)
		{
			infoDraw();
		}
		else if (menuCode == 2)
		{
			return 0;
		}
		system("cls");
	}
	return 0;
}