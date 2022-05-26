#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DEBUG

const int MAXSIZE = 20;

class Plural
{
	
public:
	
	Plural();												// Конструктор без параметров для класу Plural
	Plural(char* array, int size);							// Конструктор з параметрами для класу Plural
	Plural(const char* arr);								// Конструктор з параметрами(рядком символів) для класу Plural
	Plural(const Plural& exemplar);							// Конструктор копіювання
	~Plural();												// Деструктор

	Plural operator* (const Plural& exemplar);				// Перевантаження оператора *
	int operator<(const Plural& exemplar);					// Перевантаження оператора <
	Plural operator= (const Plural& exemplar);				// Перевантаження оператора =
	//friend int operator> (const Plural arr, char symbol);	// Перевантаження оператора >
	int operator> (char symbol);
	

	int add(char symbol);									// Функція, що додає елемент в множину
	int sizeIncrease(int demandSize);						// Функція, що збільшує максимальной можливий розмір масиву так, щоб _maxSize > demandSize 
	int GetCurrentSize();									// Метод отриманя розміру множини
	int GetMaxSize();										// Метод отриманя максимального розміру множини
	char* ToArray();
	int SetPlural(char* arrayOfChar, int size);				// Метод, що встановлює множину з масиву символів
	int SetPlural(const char* inputArray);					// Метод, що встановлює множину з рядка (масиву символів з \0 в кінці)
	
	
	void Print();											// Метод виводу множини на екран

private:

	//char* arrayToSet(char* arr, int size);
	int checkMemory(char* arr);					// Функція перевірки виділення пам'яті 

	char* _arr;
	int _maxSize;
	int _currentSize;
	
};





