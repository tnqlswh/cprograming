#include "util.h"

void init()
{
	system("title 10분 용사");
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SMALL_RECT windowSize = { 0, 0, 129,  109};  // 콘솔 창의 크기를 80x25로 지정

	SetConsoleWindowInfo(consoleHandle, TRUE, &windowSize);
}