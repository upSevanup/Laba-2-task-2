//Задание 2

#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int n;

	cout << "Введите трехзначное число: ";
	cin >> n;

	n = (n / 100) * 100;

	cout << "Число с занулёнными еденицами и десятками: " << n;
}