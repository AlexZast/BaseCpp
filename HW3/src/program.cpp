
#include "head.h"


using namespace std;



int main(int argc, char** args)
{

Path("Part 1");    
/* Задание №1 */
	
	using _geek::Devision;
	
	cout << Devision(5, 6) << endl;

	
Path("Part 2");
/* Задание №2*/

	int a, c; 
	cout << "Enter integred number: ";
	cin>>a;
	if (a>5){
		cout << "Enter other integred number: ";
		cin>>a;
		((a>5)&&(a<10)) ? c = a - 5 : c = 5 - a;

	} else {
		c = a - 5;
	}
 	
 	if (c>0) cout << "The result is positiv" << endl;
 	else if (c<0) cout << "The result is negativ" << endl;
 	else cout << "The result is ZERRO";


Path("Part 3");
/* Задание №3 */

enum const_set{
	//Fist part
	csConst1 = 5,
	csConst2 = 4,
	csConst3 = 3,
	//Second part
	csConst4 = 2,
	csConst5 = 1,
	csConst6 = 0
}c_set;

cout << "Enter the number: ";
cin >> a; 			//т.к. а уже было определено ранее по тексту

switch(a){
	case csConst1:
	case csConst2:
	case csConst3:
	cout << "Number in fist part of Constant" << endl;	
	break;

	case csConst4:
	case csConst5:
	case csConst6:
	cout << "Number in second part of Constant" << endl;
	break;
	default: cout << "Incorrect enter." << endl;
}

Path("Part 4");
/* Задание №4 */

	do {
	cout << "Enter integred number: ";
	cin>>a;
	} while (a<3);

	do {
		cout << a << " | ";
		a -= 1;
	} while ( a != 0 );
	cout << endl;

Path("Part 5");
/* Задание №5*/
	int stick;
	cout << "  THE GAME OF STICK" << endl << endl;
	//Цикл запроса у пользователя количества палочек до тех пор пока он не введет тербуемое количесвто или остановка программы
	do {
	cout << "  Enter number of start stick (10 - 30 or 0 - stop the game(always in game): ";
	cin >> stick;
	if (stick == 0) {return 0;}
	} while (stick < 10 || stick > 30);
	
	char b;
	// Определение первого хода, можно рандомно, можно что бы по данному выбору всегда выигрывал компьютер но мы сделаем выбором игроком
	do{
	cout << "  Enter who make the fist turn: P - player, C - computer, 0 - stop : ";
	cin >> b;
	if (b == '0') return 0;
	
		} while ((b != 'p') && (b != 'P') && (b != 'c') && (b != 'C')); // 4 выбора для ввода заглавных или строчных букв

	//цикл пока не закончаться палочки
	
	while (stick > 0)
	{
		//Выведем палочки на экран
		for (int i = 0; i < stick; i++){
			cout << " | ";
		} 
		cout << endl;

		// чей ход
		switch(b)
		{
			// ход игрока
			case 'p':
			case 'P':
			do {
			cout << "  How many stick take (1, 2 or 3)? : ";
			cin >> a;
			} while ((a<1 || a >3) && a <= stick); // проврка на вязите
			stick -= a;
			if (stick == 0) {cout << endl << "  ********* YOU LOSSSSE ********* "; break;}
			b = 'c'; // передаем ход компьютеру
			break;
			
			// ход компьютера
			case 'c':
			case 'C':
			((stick%4) == 0) ?  c = 3 : c = (stick%4 - 1);
			if (c == 0){
				c = 1;
			}
			stick -= c;

			cout << "  Computer take " << c << " stick!" << endl;
			if (stick == 0) {cout << endl <<" ********* CONGRATULATIONS! YOU WIN!!! ********* "; break;}
			b = 'p'; // передаем ход игроку
			break;
		}
	}


Path("Part 6");
/* Задание №6*/
int j = 30; // инче в консоли выводит кракозябры вместо первых символов таблицы ASCII
char p[10];
for (int i = 0; i < 10; i++, j+=3){
	p[i] = static_cast<char>(j);
	cout << p[i] << endl;
}
cout << endl;


Path("END");

system("pause"); // Для паузы при запуске файла .exe из системы

return 0;					
}









