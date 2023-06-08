#include "main.h"

int cellar();
int livingroom();
int garret();
int storage();
int bathroom();
int gameover_bedroom();
int ending();
int gameover_time();

int item[12] = { 0 }; 
/*아이템 습득 확인용 배열
* 
0 = 지하실 열쇠
1 = 유리컵
2 = 다락방 열쇠
3 = 창고 열쇠
4 = 화장실 열쇠
5 = 상자 열쇠
6 = 계량 스푼
7 = 스패너
8 = 녹 제거 약
9 = 보물
10 = 옥상열쇠
11 = 낙하산
*/