#include <iostream>
#include "task2.h"
#include "task3.h"

using namespace std;
int main()
{
	unsigned int userInput;
	cout << "���������� ������� ����� ����� ��������� ��� ������� ����� � ���� �������" << endl;
	cin >> userInput;
	cout << "��� ����� ����� �����: " << endl;
	cout << sumPrime(userInput) << endl;
	return 0;
}