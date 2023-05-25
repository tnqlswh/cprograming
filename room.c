#include "room.h"

int count;

void countCheck()
{
	if (count >= 60)//60번 이상 행동할 시 게임오버
	{
		gameover_time();
	}
}

int cellar()//지하실
{
	static int justOnecell = 0;//첫 입장 대사 1번 출력
	if(justOnecell == 0)
	{
		_getch();
		printf("파놓은 터널이 무너졌긴 했지만...에이 어차피 현관으로 나가면 되겠지 뭐!\n");
		_getch();
		printf("어찌저찌 들어오긴 했는데 시간이 10분밖에 안 남았다니...\n");
		_getch();
		printf("3대 500치는 그 녀석이랑 정면으로 맞서기 전에, 빨리 찾아서 나가자!\n");
		_getch();
		CLR;
		justOnecell = 1;
	}

	while (1)
	{
		int cellChoose;
		cellarArt();
		printf("우리 왕국의 지하 창고와는 비교도 안 될 정도로 깨끗한 지하실이다.\n");
		printf("지하실까지 이렇게 깨끗할 정도면, 얼마나 갓생을 사는 거야...?\n\n");
		printf("1) 삼단서랍장 윗칸  2) 삼단서랍장 중간칸  3) 삼단서랍장 아랫칸  4) 접이식 침대 밑  5) 지하실 출구\n");
		printf(">> ");
		scanf_s("%d", &cellChoose);
		while (1)
		{
			if (cellChoose == 1)//삼단 윗칸
			{
				count += 1;
				countCheck();
				CLR;
				if (item[0] == 1)//지하실 열쇠 보유 시
				{
					printf("클립, 스테이플러심, 15cm 쇠 자...살짝 널부러진 여러 쇠붙이 물건들이 보인다.\n");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("클립, 스테이플러심, 15cm 쇠 자, 그리고 '지하실'이라 적힌 열쇠...깔끔하게 정리된 여러 쇠붙이 물건들이 보인다.\n");
					_getch();
					printf("이 열쇠는 가져가야겠다.\n\n");
					_getch();
					printf("지하실 열쇠를 획득했다!");
					_getch();
					CLR;
					item[0] = 1;//지하실 열쇠(거실로 가는 문 열쇠)획득
					break;
				}
			}
			else if (cellChoose == 2)//삼단중간칸
			{
				count += 1;
				countCheck();
				CLR;
				if (item[1] == 1) //유리컵 보유 시
				{
					printf("고급스러운 찻잔과 접시가 보인다. 유리컵을 찾느라 건드렸더니 처음보단 덜 가지런하다.");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("고급스러운 찻잔과 접시가 보인다. 하나 슬쩍해도 모르겠지? 혹시 필요할지도 모르잖아!\n");
					_getch();
					printf("왕관 훔쳐간 거랑 쌤쌤이라 치자.\n\n");
					_getch();
					printf("유리컵을 획득했다!");
					_getch();
					CLR;
					item[1] = 1;//유리컵 획득
					break;
				}
			}
			else if (cellChoose == 3)//삼단하단칸
			{
				count += 1;
				countCheck();
				CLR;
				printf("종이 서류가 잔뜩 있다!\n맨 위에 놓인 A4 용지에는 크게 6 4라고 적혀있다...?\n");
				_getch();
				printf("중요한 숫자같아 보이는데. 이건 외워놓아야지.");
				_getch();
				CLR;
				break;
			}
			else if (cellChoose == 4)//접이식 침대 밑
			{
				count += 1;
				countCheck();
				CLR;
				if (item[2] == 1)//다락 방 열쇠 보유 시
				{
					printf("침대 밑까지 신경쓰는 용이랑은 정말 엮이고 싶지 않아... 에잇, 빨리 나가야지!");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("침대 밑까지 깨끗하다고? 여러 의미로 '무시무시한 용'이다...\n");
					_getch();
					printf("웬일로 열쇠가 하나 있네. '다락방'이라고 적혀 있어.\n여기에 넣어놓았단 말은 중요한 물건이라는 뜻이겠지? 바로 챙겨가야겠다!\n\n");
					_getch();
					printf("다락방 열쇠를 획득했다!");
					_getch();
					CLR;
					item[2] = 1; //다락방 열쇠 획득
					break;
				}
			}
			else if (cellChoose == 5)//지하실 출구
			{
				count += 1;
				countCheck();
				CLR;
				if (item[0] == 1)//지하실 열쇠 보유 시
				{
					printf("서랍장에서 찾은 열쇠를 집어넣었다.\n\n");
					_getch();
					printf("... ...\n");
					printf("딸깍하면서 문이 열렸다!");
					_getch();
					livingroom();
				}
				else
				{
					printf("문이 굳게 잠겨 있다. 안쪽에서도 열쇠로 열어야 한다고? 이렇게까지 할 이유가 있나?");
					_getch();
					CLR;
					break;
				}
			}
			else//선택지 이외의 것을 입력했을 경우
			{
				countCheck();
				CLR;
				break;
			}
		}
	}
}

int livingroom()//거실
{
	CLR;
	static int justOneliv = 0;//첫 입장시 한 번만 출력되게 하는 장치
	if (justOneliv == 0)
	{
		_getch();
		printf("좋아, 드디어 빠져나왔다...\n");
		_getch();
		printf("잠깐, 현관이 없네? 설마 옥상에서 날아가면 되는 거라 없는거야?\n");
		_getch();
		printf("낙하산이라도 있으면 좋을텐데... 그럴 가능성이 얼마나 있을진 모르겠지만 보물 찾다가 나왔으면 좋겠다.\n");
		_getch();
		CLR;
		justOneliv = 1;
	}
	while (1)
	{
		int livChoose;
		livingroomArt();
		printf("깨끗한 바닥, 깔끔한 가구들. 삐뚤어진 것 하나 없이 깔끔한 거실이다.\n");
		printf("거실에 연결되어 있는 부엌도 그야말로 깔끔 그 자체다.\n");
		printf("검은 용을 왕실 청소부로 고용할까 진지하게 고민할 뻔했어...\n\n");
		printf("1) 지하실 문  2) 다락방 문  3) 창고 문  4) 화장실 문  5) 침실 문  6) 부엌 서랍장  7) 부엌 찬장  8) 메모판  9) 옥상 문\n");
		printf(">> ");
		scanf_s("%d", &livChoose);
		while (1)
		{
			if (livChoose == 1)//지하실 문
			{
				count += 1;
				countCheck();
				CLR;
				printf("뭔가 두고 간건 없을까? 잠깐 들어갔다 와보자.");
				_getch();
				CLR;
				cellar();
			}
			else if (livChoose == 2)//다락방 문
			{
				count += 1;
				countCheck();
				CLR;
				if (item[2] == 1) //다락방 열쇠 보유 시
				{
					printf("나무 문 한가운데 '다락방 계단'이라는 팻말이 걸려 있다.\n");
					_getch();
					printf("지하실에서 찾은 열쇠를 집어넣었다.\n\n");
					_getch();
					printf("... ...\n");
					printf("딸깍하면서 문이 열렸다!");
					_getch();
					CLR;
					garret();
					break;
				}
				else
				{
					printf("나무 문 한가운데 '다락방 계단'이라는 팻말이 걸려 있다.\n");
					_getch();
					printf("문은 너무 당연하게도 잠겨 있다.\n");
					_getch();
					CLR;
					break;
				}
			}
			else if (livChoose == 3)//창고 문
			{
				count += 1;
				countCheck();
				CLR;
				if (item[3] == 1) //창고 문 열쇠 보유 시
				{
					printf("빗장으로 잠긴 커다란 철제 문 한가운데 '접근 금지'라는 팻말이 걸려 있다.\n");
					_getch();
					printf("다락방에서 찾은 열쇠를 자물쇠에 집어넣었다.\n\n");
					_getch();
					printf("... ...\n");
					printf("자물쇠가 열렸다!\n");
					printf("들어가지 말라는 곳에 들어가는 건 언제나 재미있는 법이지.");
					_getch();
					CLR;
					storage();
					break;
				}
				else
				{
					printf("빗장으로 잠긴 커다란 철제 문 한가운데 '접근 금지'라는 팻말이 걸려 있다.\n");
					_getch();
					printf("이런 걸 보니 더 들어가고 싶은걸.\n");
					_getch();
					printf("안타깝게도, 그리고 당연하게도 자물쇠로 잠긴 빗장 때문에 문은 열지 못한다.\n");
					_getch();
					CLR;
					break;
				}
			}
			else if (livChoose == 4)//화장실 문
			{
				count += 1;
				countCheck();
				CLR;
				if (item[4] == 1)//화장실 문 열쇠 보유 시
				{
					printf("문 한가운데 '화장실'이라는 팻말이 걸려 있다.\n");
					_getch();
					printf("다락방 상자에서 찾은 열쇠를 집어넣었다.\n\n");
					_getch();
					printf("... ...\n");
					printf("딸깍하면서 문이 열렸다!\n");
					_getch();
					CLR;
					bathroom();
					break;
				}
				else
				{
					printf("문 한가운데 '화장실'이라는 팻말이 걸려 있다.\n");
					_getch();
					printf("도대체 화장실 문은 왜 잠가놓은 거지?");
					_getch();
					CLR;
					break;
				}
			}
			else if (livChoose == 5)//침실 문
			{
				count += 1;
				countCheck();
				CLR;
				int bedChoose;
				printf("화려한 문 한가운데 '침실'이라는 팻말이 걸려있다.\n");
				_getch();
				printf("문 너머로 용의 드르렁대는 소리가 들린다.\n\n");
				printf("1) 침실 문고리를 잡기  2) 거실로 돌아가기\n");
				printf(">> ");
				scanf_s("%d", &bedChoose);
				if (bedChoose == 1)//침실 문고리를 잡기
				{
					int bedChoose2;
					CLR;
					printf("한 번 들어가 보자. 조용히만 한다면 괜찮겠지?\n\n");
					_getch();
					printf("문고리를 돌리니 열쇠도 없이 문이 열렸다.\n");
					printf("문이란 문은 죄다 열쇠로 잠가놓고 여기만 열린 채 둔다고???\n\n");
					printf("1) 침실로 들어가기  2) 지금이라도 돌아가기\n");
					printf(">> ");
					scanf_s("%d", &bedChoose2);
					if (bedChoose2 == 1)
					{
						CLR;
						printf("이미 문까지 열었는데, 역시 인생은 직진이지!");
						_getch();
						CLR;
						gameover_bedroom();
					}
					else if (bedChoose2 == 2)
					{
						CLR;
						printf("역시 아닌 거 같아. 지금이라도 문을 닫자...!\n");
						printf("다시 돌아가자.");
						_getch();
						CLR;
						break;
					}
				}
				else if (bedChoose == 2)//거실로 돌아가기
				{
					CLR;
					printf("괜히 들어갔다가 용을 깨우고 싶지는 않아...\n");
					printf("다시 돌아가자.");
					_getch();
					CLR;
					break;
				}
			}
			else if (livChoose == 6)//부엌 서랍장
			{
				count += 1;
				countCheck();
				CLR;
				if (item[5] == 1)
				{
					printf("서랍장에 여러 물건들이 뒤섞여 있다.");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("서랍장에 여러 물건들이 가지런히 정리되어 있다. 필요한 물건은 없을까?\n\n");
					_getch();
					printf("뒤적대다 보니 '낙하산'이라 적힌 열쇠가 구석에 숨겨져 있었다.\n");
					printf("... 잠깐, 낙하산?\n");
					_getch();
					printf("열쇠가 들어맞는 곳만 찾으면, 낙하산을 타고 안전하게 빠져나갈 수 있겠다!\n\n");
					_getch();
					printf("'낙하산'이라 적힌 열쇠를 획득했다!");
					_getch();
					CLR;
					item[5] = 1;//상자 열쇠 획득
					break;
				}
			}
			else if (livChoose == 7)//부엌 찬장
			{
				count += 1;
				countCheck();
				if (item[6] == 1)
				{
					CLR;
					printf("부엌 서랍장에 조리기구들이 엉망진창으로 놓여 있다.");
					_getch();
					CLR;
					break;
				}
				else
				{
					CLR;
					printf("부엌 서랍장에 다양한 조리기구가 오와 열을 맞춰 정리되어 있다.\n");
					_getch();
					printf("계량 스푼이 눈에 보인다... 어딘가엔 쓰이지 않을까?\n\n");
					_getch();
					printf("계량 스푼을 획득했다!");
					_getch();
					CLR;
					item[6] = 1;//계량 스푼 획득
					break;
				}
			}
			else if (livChoose == 8)//메모판
			{
				count += 1;
				countCheck();
				CLR;
				printf("부엌 메모판에 하루 일과, 이번 달 스케줄, 그리고 해야 할 일에 대한 메모가 잔뜩 정리되어 있다.\n");
				_getch();
				printf("우리 왕실 게시판은 마지막으로 쓴지 얼마나 됐지?... 어쨌든 오늘 일정에는 어떤 내용이 적혀 있을까?\n\n\n");
				_getch();
				CLR;
				printf("----------------------------------------------------------------\n");
				printf("집안 청소하는 날.\n");
				printf("녹슨 부분 관리: 녹 제거제 15mL, 물 한 컵 섞어서 녹슨 곳에 바를것.\n");
				printf("녹 제거제 양은 반드시 정확하게 맞출 것! 약품은 손으로 만지지 말 것!\n");
				printf("----------------------------------------------------------------\n\n");
				_getch();
				printf("15mL면 계량 스푼으로 한 스푼이었던가? ...모르겠다.");
				_getch();
				CLR;
				break;
			}
			else if (livChoose == 9)//옥상 문
			{
				count += 1;
				countCheck();
				CLR;
				if (item[9] != 1)//보물 소지X
				{
					printf("보물을 찾기 전까지 나갈 순 없지...\n\n");
					_getch();
					printf("도대체 어디에 놔둔걸까?");
					_getch();
					CLR;
					break;
				}
				else if (item[9] == 1 && item[10] != 1)//보물 소지하고 있으나 옥상 열쇠 소지X
				{
					printf("보물은 찾았는데...옥상 열쇠가 없으니 나가고 싶어도 나갈 수가 없다.");
					_getch();
					CLR;
					break;
				}
				else if (item[9] == 1 && item[10] == 1 && item[11] != 1)//낙하산 소지X
				{
					printf("보물도, 열쇠도 있는데 안전하게 뛰어내릴 만한 장비가 없다. 난 오래 살고 싶다고.");
					_getch();
					CLR;
					break;
				}
				else if (item[9] == 1 && item[10] == 1 && item[11] == 1)//엔딩 조건 만족
				{
					CLR;
					ending();
				}
			}
			else//선택지 이외의 숫자를 입력했을 경우
			{
				countCheck();
				CLR;
				break;
			}
		}
	}
}

int garret()//다락방
{
	while (1)
	{
		int garChoose;
		garretArt();
		printf("누가 검은 용 아니랄까봐 다락방도 깔끔하게 정리되어 있다.\n");
		printf("마음까지 편안해질 정도로 나란히 정리된 상자들, 다락방 창문으로 천천히 비치는 햇살...\n");
		printf("... ... ...\n");
		printf("앗, 멍때릴 때가 아니다. 이대로 해 다 뜨면 나 끝장이라고!\n\n");
		printf("1) 보통 크기의 상자  2) 작은 상자  3) 큰 상자  4) 보석함  5) 거실로 돌아가기\n");
		printf(">> ");
		scanf_s("%d", &garChoose);
		while (1)
		{
			if (garChoose == 1)//보통크기의 상자
			{
				count += 1;
				countCheck();
				CLR;
				printf("여기도 서류가 잔뜩 담겨 있다.\n");
				_getch();
				printf("'중요한 번호'?  '3 1'...? 지하실에서 비슷한 종이를 본 거 같아. 외워놓아야겠다!");
				_getch();
				CLR;
				break;
			}
			else if (garChoose == 2)//작은 상자
			{
				count += 1;
				countCheck();
				CLR;
				if (item[4] == 1)//화장실 열쇠 보유 시
				{
					printf("옥상 열쇠나, 다른 필요한 열쇠는 없나?\n");
					_getch();
					printf("... ...\n");
					printf("아무리 뒤적거려도 당장 필요한 열쇠는 보이지 않는다.");
					_getch();
					CLR;
					break;
				}
				else if (item[7] == 1)//스패너 보유 시
				{
					printf("스패너로 볼트를 풀고, 상자를 열어 보니 더 많은 열쇠들이 들어 있었다.\n");
					_getch();
					printf("당장 필요해 보이는 건 '화장실(여분)'이라 적힌 이 열쇠 뿐이네.\n\n");
					_getch();
					printf("화장실 열쇠를 획득했다!");
					_getch();
					CLR;
					item[4] = 1;//화장실 열쇠 획득
					break;
				}
				else
				{
					printf("상자가 볼트로 꽉 잠겨 있다. 저걸 풀 수 있는 스패너가 있다면 좋을 텐데...\n");
					_getch();
					printf("다락방 안에서는 딱히 스패너 같은 게 보이지 않는다.\n");
					_getch();
					CLR;
					break;
				}
			}
			else if (garChoose == 3)//큰 상자
			{
				count += 1;
				countCheck();
				CLR;
				if (item[11] == 1)//낙하산 보유 시
				{
					printf("그러고보니 원래 녹 닦는 건 용이 해야할 일이었는데. 좋은 일 해줬으니 낙하산은 내가 챙겨간다!\n");
					_getch();
					CLR;
					break;
				}
				else if (item[8] == 1 && item[5] != 1)//녹 제거제 보유하고 있으나 상자 열쇠 보유X
				{
					printf("녹을 제거 했으니, 이제 열쇠만 찾으면 된다!\n");
					_getch();
					CLR;
					break;
				}
				else if (item[8] == 1 && item[5] == 1)//녹 제거제, 상자 열쇠 모두 보유 시
				{
					printf("녹도 제거했고, 열쇠도 있겠다~ 바로 열어봐야겠다.\n");
					_getch();
					printf("... ...");
					printf("예상대로 낙하산이 있다! 얼른 챙겨가야지.\n\n");
					_getch();
					printf("낙하산을 획득했다!");
					_getch();
					CLR;
					item[11] = 1;//낙하산 획득
					break;
				}
				else
				{
					printf("상자가 자물쇠로 잠겨 있다. 근데 이 자물쇠, 녹이 엄청 슬어 있네?\n");
					_getch();
					printf("검은 용 집에 있는 물건 치고는 의외지만, 어쨌든 열쇠만으로는 열리지 않을 것 같다.\n\n");
					_getch();
					printf("그리고 상자에 메모지가 붙어 있다.\n\n");
					printf("-----------------------------------------------\n");
					printf("'청소날에 이 자물쇠도 녹 제거제로 닦아놓을 것!'\n");
					printf("-----------------------------------------------");
					_getch();
					CLR;
					break;
				}
			}
			else if (garChoose == 4)//보석함
			{
				count += 1;
				countCheck();
				CLR;
				if (item[3] == 1)//창고 열쇠 보유시
				{
					printf("열쇠걸이에 열쇠가 잔뜩 걸려 있다.\n창가로 들어오는 햇빛이 비쳐서 은은하게 반짝인다...\n");
					_getch();
					printf("... ... ...\n");
					printf("정신차려! 아까도 말했지, 해 다 뜨면 끝장이라고.");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("열쇠걸이에 열쇠가 잔뜩 걸려 있다. '창고'라고 적힌 열쇠가 눈에 띈다...\n");
					_getch();
					printf("창고라면, 그 '접근 금지'라 적혀있던 철문이려나? 가져가 봐야겠다.\n\n");
					_getch();
					printf("창고 열쇠를 획득했다!");
					_getch();
					CLR;
					item[3] = 1;//창고 열쇠 획득
					break;
				}
			}
			else if (garChoose == 5)//거실로 돌아가기
			{
				count += 1;
				countCheck();
				CLR;
				printf("거실로 돌아가야겠다.");
				_getch();
				livingroom();
			}
			else//선택지 이외의 숫자를 입력했을 경우
			{
				countCheck();
				CLR;
				break;
			}
		}
	}
}

int storage()//창고
{
	CLR;
	static int justOnestor = 0;//첫 입장시 한 번만 출력되게 하는 장치
	if (justOnestor == 0)
	{
		_getch();
		printf("좋아, 창고에 들어왔다...\n\n");
		_getch();
		printf("잠시만, 문이 닫혀버린 거 같은데? 설마 나 갇힌거야?\n");
		_getch();
		printf("침착하자, 아직 용은 일어나지 않은 거 같으니깐 나갈 방법부터 생각해보자...\n");
		_getch();
		CLR;
		printf("문 옆에 장치가 보이는데, 장치를 자세히 보니 문과 연결되어 있다.\n");
		printf("저 장치만 어떻게 하면 되지 않을까?\n\n\n");
		_getch();
		CLR;
		justOnestor = 1;
	}
	while (1)
	{
		int storChoose;
		int pw;//금고 비밀번호
		storageArt();
		printf("창고하면 어두컴컴할 거라 생각했는데, 여기는 관리가 잘 되어서 그런지 분위기가 전혀 음침하지 않다.\n");
		printf("설마 창고까지 인테리어를 신경쓴 걸까? 딴 사람이라면 모를까, 검은 용이라서 은근히 납득이 된다.\n\n");
		printf("1) 공구함  2) 금고  3) 거실로 돌아가기\n");
		printf(">> ");
		scanf_s("%d", &storChoose);
		while (1)
		{
			if (storChoose == 1)//공구함
			{
				count += 1;
				countCheck();
				CLR;
				if (item[7] == 1)//스패너 보유 시
				{
					printf("공구함에 여러 도구들이 뒤섞여 놓여 있다. 아까 도구 빼다가 몇 개는 사라진 거 같은데, 괜찮겠지?\n");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("공구함에 여러 도구들이 가지런히 정리되어 놓여 있다...\n");
					_getch();
					printf("찾았다, 스패너! 이거라면 문도 열고, 다락방 상자도 열 수 있을 거야!\n\n");
					_getch();
					printf("스패너를 획득했다!");
					_getch();
					CLR;
					item[7] = 1;//스패너 획득
					break;
				}
			}
			else if (storChoose == 2)//금고
			{
				count += 1;
				countCheck();
				CLR;
				if (item[9] == 1) //보물 획득 시
				{
					printf("금고 문은 안 닫아놔도 되겠지. 내 알 바는 아님!");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("앗, 뭔가 특별하게 생긴 금고가 있다!\n");
					printf("비밀번호 6자리를 입력해야 하는 것 같은데...번호를 어떻게 찾지?\n\n");
					printf("비밀번호 입력: ");
					scanf_s("%d", &pw);
					if (pw == 643128)
					{
						CLR;
						printf("헉, 정말로 이게 비밀번호였다니! 용 녀석도 은근 허술하네.\n");
						_getch();
						printf("빼앗긴 보물이다! 미안하지만, 이 용사님이 다시 가져가 줘야겠다.\n\n");
						_getch();
						printf("보물을 되찾았다!");
						_getch();
						CLR;
						item[9] = 1;//보물 획득
						break;
					}
					else
					{
						CLR;
						printf("쓰읍 금고 문이 안열리는 걸 보니 틀린 것 같다. 비밀번호가 어디 있을까...");
						_getch();
						CLR;
						break;
					}
				}
			}
			else if (storChoose == 3)//거실로 돌아가기
			{
				count += 1;
				countCheck();
				if (item[7] == 1)//스패너 보유 시
				{
					CLR;
					printf("스패너로 장치의 부품을 회전시키니 문이 열렸다!\n");
					_getch();
					printf("거실로 돌아가야겠다.");
					_getch();
					CLR;
					livingroom();
				}
				else
				{
					CLR;
					printf("거실로 돌아가려니 창고 문이 열리질 않는다. 장치를 어떻게 해 봐야 할 거 같은데...\n");
					_getch();
					printf("스패너라도 찾아봐야 하나?");
					_getch();
					CLR;
					break;
				}
			}
			else//선택지 이외의 숫자를 입력했을 경우
			{
				countCheck();
				CLR;
				break;
			}
		}
	}
}

int bathroom()//화장실
{
	CLR;
	static int justOnebath = 0;//첫 입장시 한 번만 출력되게 하는 장치
	if(justOnebath == 0)
	{
		_getch();
		printf("화장실까지 굳이굳이 잠가 놓는 이유가 뭘까? 진짜 정신 나갈거 같아...\n\n\n");
		_getch();
		CLR;
		justOnebath = 1;
	}
	while (1)
	{
		int bathChoose;
		bathroomArt();
		printf("거울은 어제 새로 맞춘 것처럼 반짝이고, 바닥 타일 하나하나가 빛을 뿜고 있다...\n");
		printf("우리 왕국 화장실에선 감히 상상도 할 수 없는 광경이다.\n");
		printf("그리고 여기서라면 녹 제거제도 만들 수 있을 것 같다!\n\n");
		printf("1) 화장실 수납장  2) 녹 제거제 만들기  3) 거실로 나가기\n");
		printf(">> ");
		scanf_s("%d", &bathChoose);
		while (1)
		{
			if (bathChoose == 1)//화장실 수납장
			{
				count += 1;
				countCheck();
				CLR;
				if (item[10] == 1)//옥상 열쇠 보유 시
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
					printf("열쇠는 챙겨가야겠다.\n\n");
					_getch();
					printf("옥상 열쇠를 획득했다!");
					_getch();
					CLR;
					item[10] = 1;//옥상 열쇠 획득
					break;
				}
			}
			else if (bathChoose == 2)//녹 제거제 만들기
			{
				count += 1;
				countCheck();
				CLR;
				if (item[1] == 1 && item[6] != 1)//유리컵 有, 계량 스푼 無
				{
					printf("컵은 지하실에서 가져온 걸 쓰면 되겠지? 그런데 계량할 도구가 없다.");
					_getch();
					CLR;
					break;
				}
				else if (item[1] != 1 && item[6] == 1)//유리컵 無, 계량 스푼 有
				{
					printf("계량 스푼이면 용량 맞추느라 스트레스 받을 일은 없겠네. 근데 약을 담을 컵이 없다.");
					_getch();
					CLR;
					break;
				}
				else if (item[1] == 1 && item[6] == 1)//유리컴, 계량 스푼 모두 보유 시
				{
					printf("지하실에서 가져온 컵이랑, 용량 맞출 계량 스푼...필요한 건 다 있는 것 같다.\n");
					_getch();
					printf("대충 물 받고 휘저어주면...완성이다! 조심해서 들고 가자.\n\n");
					_getch();
					printf("녹 제거제를 획득했다!");
					_getch();
					CLR;
					item[8] = 1;//녹 제거제 획득
					break;
				}
				else
				{
					printf("녹을 제거할 약을 만들어야 할텐데, 가지고 있는 것 중에선 쓸 만한 게 하나도 없다...");
					_getch();
					CLR;
					break;
				}
				if (item[8] == 1)//녹 제거제 보유 시
				{
					printf("약을 만들다가 바닥이 더러워졌다. 뭐 용이 알아서 치우겠지!");
					_getch();
					CLR;
					break;
				}
			}
			else if (bathChoose == 3)//거실로 나가기
			{
				count += 1;
				countCheck();
				CLR;
				printf("거실로 돌아가야겠다.");
				_getch();
				CLR;
				livingroom();
			}
			else//선택지 이외의 숫자를 입력했을 경우
			{
				countCheck();
				CLR;
				break;
			}
		}
	}
}

int gameover_bedroom()
{
	count = 0;
	CLR;
	_getch();
	printf("왕자: 꺄악!!!!!!\n\n\n");
	_getch();
	printf("문을 열어젖히자 마자, 언제 자고있었냐는 듯 메시 뺨치는 반응속도로 침대에서 튀어나오는 검은 용!\n");
	_getch();
	printf("저항할 틈도 없이 붙잡힌 왕자는, 헬스복 입은 자의 수면 시간을 무시한 대가를 온 몸으로 치러야 했다.\n\n");
	_getch();
	printf("그 날, 용의 저택을 감시하는 왕국 관제탑에서 매끄러운 포물선 모양으로 날아가는 비실비실한 무언가를 관측했다나 뭐라나.\n\n\n");
	_getch();
	printf("GAME OVER\n\n");
	printf("TIP! 잠자는 용은 건들지 말자...");
	_getch();
	CLR;
	main();
}

int ending()
{
	count = 0;
	CLR;
	_getch();
	printf("보물 탈환 작전 10분 스피드런을 성공한 왕자는, 낙하산을 타고 용의 저택에서 탈출해 왕국으로 돌아왔다.\n\n");
	_getch();
	printf("왕자의 판단력과 운 중 어느 쪽이 더 좋았던 건지는 잘 모르겠지만,\n");
	_getch();
	printf("역시 늦잠을 자고서 용의 저택에 들어가도 정신만 잘 차린다면 살아남을 수 있는 법이다.\n");
	_getch();
	printf("그러니깐 너도, 그래 너 말야 너, 무턱대고 사는 인생인 것 같아도 너무 걱정하지 말라고.");
	_getch();
	CLR;
	printf("아, 그래서 결혼식은 어떻게 됐냐고? 공주님이 나 같은 왕자는 필요없다고 취소하잰다.\n");
	_getch();
	printf("이게 인생이지...\n\n\n");
	_getch();
	printf("THE END");
	_getch();
	CLR;
	main();
}

int gameover_time()
{
	count = 0;
	//타이머가 10분이 되었을 때
	CLR;
	printf("따르르르릉!\n\n");
	_getch();
	printf("어느새 알람소리가 용의 저택을 가득 메우기 시작했다.\n");
	_getch();
	printf("지금이라도 도망치면 용한테 얻어맞는 일만큼은 면할 수 있지 않을까?...\n그런데 어떻게 빠져나가지?");
	_getch();
	CLR;
	printf("... ...\n");
	_getch();
	printf("잠시 뒤, 왕자는 굳이 복잡한 고민을 할 필요가 없다는 사실을 깨달았다. 곧 용이 나타나 왕자를 붙잡아 버렸기 때문에...\n\n");
	_getch();
	printf("그래서 어떻게 됐냐고? 굳이 그런 눈물겨운 이야기를 듣고 싶다면 말리진 않겠다만...\n\n\n");
	_getch();
	printf("GAME OVER\n\n");
	printf("TIP! 더 빨리 보물을 찾고 탈출해보자.");
	_getch();
	CLR;
	main();
}