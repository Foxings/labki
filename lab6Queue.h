#pragma once

#include "iostream"

#include "conio.h"

using namespace std;

class Queue
{
	int *arr;
	int count;
	int end = 0, start = 0, size = 0;
public:
	Queue(int count); //инициализация
	Queue(const Queue &other); //копирование
	Queue(Queue &&other); //перемещение
	Queue &operator=(const Queue &other); //присваивание
	Queue &operator=(Queue &&other); //присваивание с еремещением
	~Queue(); //деструктор
	int GetSize();
	void Push(int element); //Вставка (добавление) элемента
	int Pop(); //Удаление (взятие) элемента
	int Peek(int l); //Просмотр (взятие без удаления) элемента
	bool CheckNoEmptyQueue(); //Проверка наличия элементов
	friend ostream & operator << (ostream & stream, const Queue &a); //Вывод
};