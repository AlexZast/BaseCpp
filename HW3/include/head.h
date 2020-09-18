#include <iostream>
#include <string>  

using namespace std;















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