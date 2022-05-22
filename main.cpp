﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DEBUG
#include "plural.h"

int main()
{
	/*
	// Конструктор без параметрів 

	
	Plural array1;
	array1.Print();

	// Конструктор копіювання 
	Plural array3(array1);
	array1.Print();

	// Перевантажений оператор =
	Plural array4;
	array4 = array1;
	array4.Print();

	Plural array5;
	char arr1[5] = {'a','b','c','d','e'};
	array5.SetPlural(arr1, 5);

	Plural array6;
	char arr2[3] = { 'a','e','k'};
	array6.SetPlural(arr2, 3);


	(array5 * array6).Print();

	
	array5.SetPlural(arr,5);
	array5.Print();

	char arr2[5] = { 'a','e','k','a','e'};
	Plural array1;
	array1.SetPlural(arr2, 5);
	array1.Print();
	array1.add('v');
	array1.Print();
		*/

	char arr2[5] = { 'a','e','k','a','e' };
	char arr3[8] = { 'a','e','k','a','e','y','x','z' };
	Plural array1;
	array1.SetPlural(arr2, 5);
	std::cout << array1.GetCurrentSize() << std::endl;
	array1.Print();
	std::cout << std::endl;
	array1.SetPlural(arr3, 8);
	std::cout << array1.GetCurrentSize() << std::endl;
	array1.Print();
}
