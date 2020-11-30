#include "HW3.hpp"

/*
Составить программу, выводящую на экран текущую среду сборки (Windows/Linux), 
дату и время последней успешной сборки. Использовать константу TIME для вывода времени.
*/

int main()
{

	cout << "Build environment: " << env << endl;
	cout << "Assembly time: " << __TIME__ << endl;	
	cout << "Assembly date: "<< __DATE__  << endl;
	
	return 0;
}