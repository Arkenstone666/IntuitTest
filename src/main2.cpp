#include <iostream>
#include "task2.h"
using namespace std;

int main() {
	unsigned int userInput;
	cin >> userInput;
	cout << "����� ����� ����� ��������� ������� ��� ��� ���: " <<endl;
	cout << checkPrime(userInput) << endl;
	cout << "����� ��� ����� ����� ���-�� ��������: " <<endl;
	cout << nPrime(userInput) << endl;
	cout << "������ �����-�� �����: " << endl;
	cout << nextPrime(userInput) << endl;
	return 0;
}