#include <iostream>
#include "task2.h"
using namespace std;

int main() {
	unsigned int userInput;
	cin >> userInput;
	cout << "Введи число чтобы проверить простое оно или нет: " <<endl;
	cout << checkPrime(userInput) << endl;
	cout << "Введи ряд чисел чтобы что-то получить: " <<endl;
	cout << nPrime(userInput) << endl;
	cout << "Найдем какое-то число: " << endl;
	cout << nextPrime(userInput) << endl;
	return 0;
}