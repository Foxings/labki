#include <iostream>;
#include "Queue.h"
#include <locale.h>
#include "QueueTemplate.h"






int main()
{
	setlocale(LC_CTYPE, "rus");
	int count; //����� �������
	int l; //��� ��������� ��������
	cout << "������� ����� �������: ";
	cin >> count;
	Queue a(count);
	int ch;
	
	for (int i=0; i < count; i++)
	{
		a.Push(i);
	}
	cout << "���� �������:" << endl;
	cout << a << endl;
	ch = a.GetSize();
	cout << "������ �������: " << ch << endl;
	cout << "�������� ��������: " << endl;
	a.Pop();
	cout << "���� ������� ����� ��������:" << endl;
	cout << a << endl;
	cout << "�������� �������� � �������\n������� ����� ������� ������ ����������: ";
	cin >> l;
	cout << "��� ������� = " << a.Peek(l) << endl;


	
	system("pause");
	return 0;
}