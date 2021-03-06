/*
	Автор: Максим Колесник
	Группа: СБС-001-О-01
	Задание№: 2: 5)
	Цель: Написать программу для вычисления логарифма.
*/

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
double argument(){
	while (true){
		cout << "Enter the value of the argument 0 < x < 1: ";
		double x;
		cin >> x;
		if ((cin.fail()) || (x <= 0) || (x >= 1)){
			cin.clear();
			cin.ignore(32676, '\n');
			cout << "Incorrect entry, re-enter " << endl;
		}
		else{
			return x;
		}
	}
}
int main(){
	const int n = 8;
	int i;
	double x = argument();
	double number = 1 + x;
	double sum = 0;
	for (i = 0; i < n; i++){
		sum += ((pow(-1, i) * pow(x, 2 * i + 1)) / (2 * i + 1));
	}
	cout << "Value ln( " << number << ") =" << sum << endl;
}