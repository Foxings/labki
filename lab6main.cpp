#include <iostream>;
#include "Queue.h"
#include <locale.h>
#include "QueueTemplate.h"






int main()
{
	setlocale(LC_CTYPE, "rus");
	int count; //длина очереди
	int l; //для просмотра элемента
	cout << "Введите длину очереди: ";
	cin >> count;
	Queue a(count);
	int ch;
	
	for (int i=0; i < count; i++)
	{
		a.Push(i);
	}
	cout << "Наша очередь:" << endl;
	cout << a << endl;
	ch = a.GetSize();
	cout << "Размер очереди: " << ch << endl;
	cout << "Удаление элемента: " << endl;
	a.Pop();
	cout << "Наша очередь после удаления:" << endl;
	cout << a << endl;
	cout << "Просмотр элемента в очереди\nВведите номер который хотите посмотреть: ";
	cin >> l;
	cout << "Наш элемент = " << a.Peek(l) << endl;


	
	system("pause");
	return 0;
}