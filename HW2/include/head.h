#include <iostream>
#include <string>  
#define IT_WORKS "Its works, "
#define IT_NOT_WORKS "Its not works, "

using namespace std;

//Задание 2 обявление и реализация функции высчитывающей остатот от деления.

int Devision(int a, int b){
	return a%b;
}




//Вспомогательная функция для печати разделителя
void Path(std::string r){
	cout << endl;
	for (int i = 0; i<10; i++){

		cout << "*";
	}
	cout << r;
	for (int i = 0; i<10; i++){

		cout << "*";
	}
	cout << endl << endl;
}