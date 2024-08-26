#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int* ptr = nullptr;

	int a = 10;
	
	ptr = &a;

	cout << *ptr << endl;
}