// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Dataset.hpp"

#include "MyClass.hpp"

int main()
{
	Dataset bob("Bobby");
	std::vector<double> numbers ;
	
	for (int i = 0; i < 10; i++){ bob.AddData(rand()); }
	numbers = bob.GetData();
	std::cout << "Name is : " << bob.getName() << std::endl;
	std::cout << "The numbers are : ";
	for (int i = 0; i < numbers.size(); i++){ std::cout << numbers[i] << " "; }
	std::cout<<std::endl;
	bob.ClearData();
	for (int i = 0; i < 10; i++){ bob.AddData(i); }
	numbers = bob.GetData();
	std::cout << "The new numbers are : ";
	for (int i = 0; i < numbers.size(); i++){ std::cout << numbers[i] << " "; }
	std::cout << std::endl;

	system("Pause");


}

