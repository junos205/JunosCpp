#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void main()
{
	srand(time(NULL));

	//나머지가 0,1,2로 랜덤한 숫자 0,1,2가 출력됨
	int randomNum = rand() % 3;

	// 내가 입력할 숫자
	int myInput = 0;

	// 출력 = 가위 = 0, 바위 = 1, 보 = 2 로 설정한다
	cout << "가위바위보 선택해 입력해주세요(가위 = 0, 바위 = 1, 보 = 2) >> ";

	// 입력 = 내가 낼 숫자
	cin >> myInput;
	
	// 출력 = 컴퓨터가 낸 공격 인식
	cout << "컴퓨터가 낸 공격" << " " << randomNum << "\n";

	// 내 공격 == 상대 공격 일때 비김
	if (myInput == randomNum)
	{
		cout << "비겼습니다";
	}

	// 또는 나와 2차이 (내가 0이고 상대가 2일때), 혹은 내가 상대보다 1클때 (내가 2이고 상대가 1이거나, 내가 1이고, 상대가 2이거나) 
	else if (myInput + 2 == randomNum || myInput + 1 == randomNum)
	{
		cout << "이겼습니다";
	}

	// 그 밖에 상황은 패배
	else 
	{
		cout << "졌습니다";
	}

}