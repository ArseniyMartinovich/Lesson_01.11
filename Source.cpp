#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Массив целых чисел из 5 элементов, ввести и вывести данные в одну строку
	/*int mas[5];
	for (int i = 0; i < 5; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << mas[i] << ' ';
	}*/

	//Дан массив целых, положительных и отрицательных, чисел размером 10. Ввести данные в массив, вывести в одну строку,
	//найти кол - во положительных чисел.
	/*const int size = 10;
	int num[size];
	for (int i = 0; i < size; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < size; i++) {
		cout << num[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (num[i] > 0) k++;
	}
	cout << k << " > 0" << endl;*/


	//1 Дан массив целых чисел (положительных и отрицательных) размером 10.
	//Ввести данные в массив, вывести в одну строку В ОБРАТНОМ ПОРЯДКЕ (от посленего номера к первому)
	/*const int size = 10;
	int mas[size];
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 9; i >= 0; i--) {
		cout << mas[i] << ' ';
	}*/


	//2 Дан массив целых чисел (положительных и отрицательных) размером 8.
	//Ввести данные в массив, вывести в одну строку. Найти сумму четных элементов
	/*const int size = 8;
	int main[size];
	for (int i = 0; i < size; i++) {
		cin >> main[i];
	}
	for (int i = 0; i < size; i++) {
		cout << main[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (i % 2 != 0) {
			sum += main[i];
		}
	}
	cout << sum;*/

	//3 Дан массив целых чисел (положительных и отрицательных) размером 5.
	//Ввести данные в массив, вывести в одну строку. Найти произведение элементов с ЧЕТНЫМИ НОМЕРАМИ (0, 2 и т.д.)
	/*const int size = 5;
	int mas[size];
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' ';
	}
	cout << endl;
	int pr = 1;
	for (int i = 0; i < size; i++) {
		if (i % 2 != 0) {
			pr *= mas[i];
		}
	}
	cout << pr;*/

	//4 Дан массив целых чисел (положительных и отрицательных) размером 7.
	//Ввести данные в массив, вывести в одну строку. Найти кол-во элементов,
	//которые одновременно не делятся на 3 и делятся на 5
	/*const int size = 7;
	int mas[size];
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (i % 3 != 0 && i % 5 == 0) k++;
	}
	cout << k;*/


	//5 Дан массив целых чисел (положительных и отрицательных) размером 9.
	//Ввести данные в массив, вывести в одну строку. Найти среднее арифметическое нечетных элементов.
	/*const int size = 9;
	int mas[size];
	for (int i = 0; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' ';
	}
	cout << endl;
	double sr;
	int k = 0, sum = 0;
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			sum += mas[i];
			k++;
		}
	}
	sr = sum / (double)k;
	cout << sr;*/

	




	return 0;
}