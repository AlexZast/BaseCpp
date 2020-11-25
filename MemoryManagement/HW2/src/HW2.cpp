#include "HW2.hpp"

using namespace std;


/*Составить и проверить в действии функцию, составляющую 32-разрядное беззнаковое целое значение uint32_t 
из четырех байт данных. Обращаться со значением нужно при этом как с простым массивом из 4 элементов типа unsigned char. 
При этом:
Использовать указатели;
Применить операции приведения типов данных;
Заполненное 32-разрядное значение должно быть возвращено из функции.
*/

uint32_t make(unsigned char* date){
    void* c = static_cast<void*>(date);
    uint32_t *number = static_cast<uint32_t*>(c);
return *number;
};

int main()
{
	// Разряды в unsigned char от младшего -> к старшему
	unsigned char date[4] = {23,2,0,0}; //выведет 535 = 23 * 1 + 2 * 256 + 0 * 65536 + 0 * 16777216
    uint32_t number = make(date);
    cout << number << endl;

    return 0;
}






