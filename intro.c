#include "game.h"

void titleOpen()
{
	printf("\n\n\n\n\n\n\n");
	printf("        ##      ####      ##    ##  ######  ###  ###        ###  ###  ####### ######     ####\n");
	printf("       ###     ##  ##      ### ###    ##     ###  #          ##   ##   ##   #  ##  ##   ##  ##\n");
	printf("        ##     ##  ##      # ## ##    ##     # ## #          ##   ##   ##      ##  ##   #    #\n");
	printf("        ##     ##  ##      # ## ##    ##     # ## #          #######   #####   #####    #    #\n");
	printf("        ##     ##  ##      # ## ##    ##     #  ###          ##   ##   ##      ## ##    #    #\n");
	printf("        ##     ##  ##      #  # ##    ##     #   ##          ##   ##   ##   #  ##  ##   ##  ##\n");
	printf("      ######    ####      ###   ##  ######  ###   ##        ###  ###  ####### #### ###   ####\n\n\n\n\n\n");
	printf("                                            1. 게 임 시 작 \n");
	printf("                                            2. 게 임 정 보 \n");
	printf("                                            3. 게 임 종 료 \n\n\n\n");
	printf("        실행하길 원하는 \033[33m번호\033[0m를 입력해주세요: ");
}

void infoDraw()
{
	printf("게임 방식: 원하는 행동의 \033[31m번호\033[0m를 >>의 기호 옆에 입력해서 진행합니다!\n게임이 시작되면 행동마다 횟수를 카운트하게 됩니다.\n스릴을 위해 전체 횟수 공개는 안하고 있으니 정해진 횟수 내에서 빠르게 탈출하세요!\n\n");
	printf("스토리 진행: \033[31m아무 키나 입력\033[0m 시 다음 대사가 나옵니다.\n\n");
	printf("**주의사항** 인트로 진행에서 뒤로가기가 없으므로 꼭!!!!! \033[31m천천히 읽으시는 걸 권장\033[0m드립니다.\n숫자 입력 란에 숫자 이외의 문자를 입력할 경우 \033[31m게임이 고장\033[0m날 수 있습니다.\n\n\n");
	printf("1. 메인화면으로 돌아가기\n");
	printf("2. 바로 게임 시작하기\n\n");
	printf(">> ");
}

void introPlay()
{
	//각 등장인물 색 다르게 하는 거 고려해보기. & 나레이션도!
	_getch();
	printf("오늘은 왕자의 결혼식날.\n\n");
	_getch();
	printf("왕자와 공주의 결혼식을 축하하기 위해 왕국의 백성들이 모두 모여 성대한 축제를 열었다...!\n\n");
	_getch();
	printf("이윽고 해가 저물고 축제 시간이 되자, 아리따운 공주님과 멋진 왕자님이 입...장...을 해야 하는데??");
	_getch();
	CLR;
	printf("왕자: \"으아악!죄송합니다!!알람을 맞춰놓는다는게 그만!!\"\n\n\n");
	_getch();
	printf("그렇다. 왕자는 사실...\n잠만 들면 옆 왕국에서 핵이 터져도 모르는 프로 늦잠러였던 것이었다!!!!!\n\n\n");
	_getch();
	printf("검은 용: \"크하하하하하!! 네가 늦잠을 잔 덕분에 이 몸의 계획이 틀어지지 않았군. 오늘은 발 뻗고 잘 수 있겠어!\"\n         \"결혼식에 쓰일 보석 왕관은 이 몸이 접수한다!!!\"\n\n\n");
	_getch();
	printf("왕자가 늦잠을 자는 사이 왕관을 훔칠 준비를 마친 검은 용. 결국 왕자와 공주는 용의 계획에 의해 왕관을 잃고 마는데...");
	_getch();
	CLR;
	printf("왕자: \"젠장! 왕관 없이도 결혼식은 어떻게든 할 수 있지만 그..그거 아무튼 비싼 거잖아!!\"\n\n");
	_getch();
	printf("검은 용: \"크하하 가져갈 수 있을테면 가져가봐라! 난 저녁 9시에 드래곤 자격증 공부를 해야하니 그럼 이만!\"\n\n");
	_getch();
	printf("공주: \"어머 세상에 우리 왕관이...! 왕자님, 이제 우리 어쩌죠 ?\"\n\n");
	_getch();
	printf("왕자: \"쩝... 빼앗긴채로 두긴 아까운데...근데 되찾아오기도 귀찮으니깐 그냥 이대로 결혼식 열면 안ㄷ- \"");
	_getch();
	CLR;
	printf("딱콩!!!!!\n\n");
	_getch();
	printf("공주한테 다섯 대 쯤 맞고 정신차린 왕자.\n\n");
	_getch();
	printf("곧 '다음날 새벽에 용이 잠들어 있을때쯤 일어나, 용의 저택에 침투해 왕관을 되찾아온다'는,\n무계획인치곤 나름 그럴싸한 계획을 세운다.");
	_getch();
	CLR;
	printf("왕자: \"검은 용 녀석이 매일 6시에 일어나 헬스를 하고 온다는 사실은 우리 왕국에서도 유명하지.\"\n\n");
	_getch();
	printf("왕자: \"... 그렇담, 그 녀석이 깊이 잠들었을 새벽 3시쯤에 일어나 용의 저택에 침입해서, 왕관을 가지고 몰래 빠져나오면 어떻게든 되지 않을까 ?\"");
	_getch();
	CLR;
	printf("그리고 다음날, 비록 알람소리는 못 들었지만 어찌저찌 침대에서 일어난 왕자.\n\n");
	_getch();
	printf("선선한 새벽 공기에 어째 적당히 상쾌한 것이 기분좋으면서도 은근히 쎄한 느낌,\n시계를 본 왕자는 소리를 지르지 않을 수 없었다.\n\n\n");
	_getch();
	printf("왕자: \"5시???????? 30분????????????????\"");
	_getch();
	CLR;
	printf("지금까지의 이야기를 읽고도 왕자를 믿었다면 참 유감이다.\n\n");
	_getch();
	printf("이 시간대로라면 왕관을 여유있게 가져오긴 커녕,\n몸 한번 잘못 놀렸다간 왕관은 코빼기도 못 본채로 헬스 착장의 검은 용과 눈 마주칠 각오를 해야할 것이다.");
	_getch();
	CLR;
	printf("다행히 20분만에 용의 저택 지하실에 몰래 들어가는 데 성공한 왕자.\n\n");
	_getch();
	printf("하지만 앞으로 남은 시간은 단 10분!!!!\n\n");
	_getch();
	printf("과연 왕자는 왕관을 가지고 돌아올 수 있을 것인가!!!!!!");
	_getch();
	CLR;
}