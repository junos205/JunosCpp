#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void main()
{
	//int inputNumber;

	//cout << "숫자를 입력하세요 >> ";

	//cin >> inputNumber;
	
	//cout << "[" << inputNumber << "]" << "입니다\n";

	srand(time(NULL));
	int random1 = rand()%3 +51;
	
	
	cout << random1;


}