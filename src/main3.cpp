#include <iostream>
#include "task2.h"
#include "task3.h"

using namespace std;
int main()
{
	unsigned int userInput;
	cout << "Пожалуйста введите число чтобы посчитать все простые числа в этом радиусе" << endl;
	cin >> userInput;
	cout << "Вот такая вышла сумма: " << endl;
	cout << sumPrime(userInput) << endl;
	return 0;
}