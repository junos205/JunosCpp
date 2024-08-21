#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

enum class RockScissorPaper
{
	Scissor,
	Rock,
	Paper,
	End
};


void main()
{
	srand(time(NULL));
	// 플레이어가 2번 입력할 공간
	int playerHand[2] = {};

	// 컴퓨터가 2번 입력할 공간
	int computerHand[2] = {};

	// 출력 >> 공격 정하기
	cout << "가위바위보 하나 빼기 (가위:0, 바위:1, 보:2)" << endl;

	
	cout << "1번 공격을 입력해주세요" << endl;

	// 입력 >> 공격 1 설정
	cin >> playerHand[0];
	
	// 입력한 공격이 0, 1, 2 범위 밖에 있다면 for문으로 범위 밖에 있는동안 계속 불러올 수 있게 설정 
	for (int j = 0; 2 < (int)playerHand[0] || 0 > (int)playerHand[0];)
	{
		cout << "잘못된 입력입니다, 다시 입력해주세요 >> ";
		cin >> playerHand[0];

	}

	cout << "2번 공격을 입력해주세요" << endl;

	// 입력 >> 공격 2 설정
	cin >> playerHand[1];

	// 입력한 공격이 0, 1, 2 범위 밖에 있거나 1번 공격과 같다면 for문으로 계속 불러올 수 있게 설정
	for (int j = 0; 2 < (int)playerHand[1] || 0 > (int)playerHand[1] || (int)playerHand[1] == (int)playerHand[0];)
	{
		cout << "잘못된 입력입니다, 다시 입력해주세요 >> ";
		cin >> playerHand[1];

	}

	// 0, 1, 2 범위에 랜덤한 숫자를 컴퓨터 공격에 저장
	computerHand[0] = rand() % 3;
	computerHand[1] = rand() % 3;

	// 컴퓨터가 가진 공격 숫자가 같다면 계속 불러오게 설정하여 값을 다르게 하도록 설정
	for (int i = 0; computerHand[0] == (int)computerHand[1]; i++)
	{
		computerHand[0] = rand() % (int)RockScissorPaper::End;
	}

	// 컴퓨터가 낸 공격 표시
	cout << "컴퓨터가 낸 공격은 ";

	// 컴퓨터의 1번 공격과 2번 공격에 따라 출력
	if (computerHand[0] == (int)RockScissorPaper::Scissor)
	{
		cout << "가위, ";
	}
	else if (computerHand[0] == (int)RockScissorPaper::Rock)
	{
		cout << "바위, ";
	}
	else
	{
		cout << "보자기, ";
	}

	if (computerHand[1] == (int)RockScissorPaper::Scissor)
	{
		cout << "가위";
	}
	else if (computerHand[1] == (int)RockScissorPaper::Rock)
	{
		cout << "바위";
	}
	else
	{
		cout << "보";
	}

	 cout << "입니다" << endl;

	
	 // 플레이어 현재 가진 공격에 대하여도 표시
	 if (playerHand[0] == (int)RockScissorPaper::Scissor)
	 {
		 cout << "가위, ";
	 }
	 else if (playerHand[0] == (int)RockScissorPaper::Rock)
	 {
		 cout << "바위, ";
	 }
	 else
	 {
		 cout << "보자기, ";
	 }

	 if (playerHand[1] == (int)RockScissorPaper::Scissor)
	 {
		 cout << "가위";
	 }
	 else if (playerHand[1] == (int)RockScissorPaper::Rock)
	 {
		 cout << "바위";
	 }
	 else
	 {
		 cout << "보";
	 }
	 cout << "중 무엇을 선택하시겠습니까? (가위:0, 바위:1, 보:2)" <<  endl;

	 // 최종 공격을 설정
	 int finalHand = 0;

	 // 최종 공격 입력
	 cin >> finalHand;

	 // 최종 공격 내용에 따라 출력
	 if (finalHand == (int)RockScissorPaper::Scissor)
	 {
		 cout << "가위";
	 }
	 else if (finalHand == (int)RockScissorPaper::Rock)
	 {
		 cout << "바위";
	 }
	 else
	 {
		 cout << "보";
	 }
	 
	 cout << "를 선택하셨습니다" << endl;

	 // 최종 공격이 이전에 설정한 공격들과 같은지 확인하여 아닐시 계속 불러오도록 설정
	 for (int k = 0; finalHand != playerHand[0] && finalHand != playerHand[1];)
	 {
		 cout << "선택한 공격이 아닙니다, 다시 입력해주세요 >> ";
		 cin >> finalHand;
	 }

	 // 컴퓨터의 최종공격 설정
	 int computerFinalHand = 0;

	 // 최종 공격이 이전에 설정한 공격들과 같은지 확인하여 아닐시 계속 불러오도록 설정
	 for (int l = 0; computerFinalHand != computerHand[0] && computerFinalHand != computerHand[1];)
	 {
		 computerFinalHand = rand() % (int)RockScissorPaper::End;
	 }
	 
	 cout << "컴퓨터는 ";

	 // 설정된 입력에 따라 컴퓨터 최종 공격 출력
	 if (computerFinalHand == (int)RockScissorPaper::Scissor)
	 {
		 cout << "가위를";
	 }
	 
	 else if (computerFinalHand == (int)RockScissorPaper::Rock)
	 {
		 cout << "바위를";
	 }
	 else
	 {
		 cout << "보를";
	 }
	 cout << " 냈습니다" << endl;

	 // 공격에 대하여 모두 설정한뒤 출력
	 if (finalHand == computerFinalHand)
	 {
		 cout << "비겼습니다";
	 }
	 else if (finalHand == (int)RockScissorPaper::Scissor && computerFinalHand == (int)RockScissorPaper::Rock)
	 {
		 cout << "졌습니다";
	 }
	 else if (finalHand == (int)RockScissorPaper::Rock && computerFinalHand == (int)RockScissorPaper::Paper)
	 {
		 cout << "졌습니다";
	 }
	 else if (finalHand == (int)RockScissorPaper::Paper && computerFinalHand == (int)RockScissorPaper::Scissor)
	 {
		 cout << "졌습니다";
	 }
	 else
	 {
		 cout << "이겼습니다";
	 }
}