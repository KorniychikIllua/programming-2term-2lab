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
	
	Plural();											// ����������� ��� ���������� ��� ����� Plural

	Plural(char* array, int size);
	Plural(char* array);
	// Plural(int size);									// ����������� � ����������� ��� ����� Plural
	Plural(const Plural& exemplar);							// ����������� ���������
	~Plural();												// ����������

	Plural operator* (const Plural& exemplar);
	int operator<(const Plural& exemplar);
	Plural& operator= (const Plural& exemplar);				// �������������� ��������� =
	friend int operator> (const Plural arr, char symbol);	// �������������� ��������� >
	// int operator> (char symbol);
	
	int sizeIncrease(int demandSize);						// �������, �� ������ ������������ �������� ����� ������ ���, ��� _maxSize > demandSize 
	int GetCurrentSize();									// ����� �������� ������ �������
	int GetMaxSize();										// ����� �������� ������������� ������ �������
	char* ToArray();
	int SetPlural(char* arrayOfChar, int size);
	int SetPlural(const char* inputArray);
	
	
	void Print();											// ����� ������ ������� �� �����

private:

	//char* arrayToSet(char* arr, int size);
	int checkMemory(char* arr);					// ������� �������� �������� ���'�� 

	char* _arr;
	int _maxSize;
	int _currentSize;
	
};





