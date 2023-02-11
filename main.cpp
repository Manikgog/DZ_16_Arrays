#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // ��������� ������� �������� �� ���� ������
	srand(time(NULL));

	// ������ 1.
	/*
		� ���������� ������� �������� � 10 ���������
	������� ������� ��������������. ����� ����������
	���-�� ���������, �������� ������� ������
	���������� �������� ���������������.
	*/
	std::cout << "Exercise 1.\nA program to search for the arithmetic mean\nof an array of numbers and output numbers \nthat are less than the arithmetic mean.\n";
	const int size = 10;
	int arr[size];
	int sum = 0, count_less = 0;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << '\t';
		sum += arr[i];
	}
	double arMean = (double)sum / size;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < arMean)
			count_less++;
	}
	std::cout << "\nArithmetic mean = " << arMean << ".\nNumber of elements = " << count_less << ".\n\n\n";
	
	// ������ 2.
	/*
		���� ��� ��������� ������� ��������� 5 �� 5
	���������. ��������� ������� �� ����� �����.
	�������� � ������� ���������� ��������� ��������
	��������� ����� ��������, ������� ������������� �
	���������� �����������.
	*/
	std::cout << "Exercise 2.\nA program for addition of arrays.\n";
	const int length = 5;
	int arr1[length][length], arr2[length][length];
	

	for (size_t i = 0; i < length; i++)
	{
		std::cout << "{ ";
		for (size_t j = 0; j < length; j++)
		{
			arr1[i][j] = rand() % 11;
			if(arr1[i][j] < 10)
				std::cout << arr1[i][j] << ",  ";
			else
				std::cout << arr1[i][j] << ", ";
		}
		if (i == length - 1)
			std::cout << "}      ";
		else if (i == length / 2)
			std::cout << "},  +  ";
		else
			std::cout << "},     ";
		std::cout << "{ ";
		for (size_t j = 0; j < length; j++)
		{
			arr2[i][j] = rand() % 11 + 10;
			if (arr2[i][j] < 10)
				std::cout << arr2[i][j] << ",  ";
			else
				std::cout << arr2[i][j] << ", ";
		}
		if (i == length - 1)
			std::cout << "}      ";
		else if (i == length / 2)
			std::cout << "},  =  ";
		else
			std::cout << "},     ";
		for (size_t j = 0; j < length; j++)
		{
			if(j == length-1)
				std::cout << arr1[i][j] + arr2[i][j];
			else if ((arr1[i][j] + arr2[i][j]) < 10)
				std::cout << arr1[i][j] + arr2[i][j] << ",  ";
			else
				std::cout << arr1[i][j] + arr2[i][j] << ", ";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";

	// ������ 3.
	/*
		������������ ������ ������������ �����. ����
	����� ������� �������, ��������� ��������� ����
	������. �����, ��������� � ����� �������� ��� ���
	����� � ���������� ������ �������� � 6 ��������� �
	������� ��� �� �����.
	*/
	std::cout << "Exercise 3.\nArray from a six-digit number.\n";
	std::cout << "Enter a six-digit number -> ";
	int six_digit_num;
	std::cin >> six_digit_num;
	if (six_digit_num >= 100'000 && six_digit_num <= 999'999) {
		const int length_ = 6;
		int arr4[length_];
		int divider = 100'000;
		for (size_t i = 0; i < length_; i++) {
			arr4[i] = six_digit_num / divider;
			std::cout << arr4[i] << ' ';
			six_digit_num %= divider;
			divider /= 10;
		}
		std::cout << '\n';
	}
	else {
		std::cout << "You didn't enter six-digit number.\n";
	}
	return 0;
}
