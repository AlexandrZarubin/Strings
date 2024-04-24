#include<iostream>
#include<windows.h>
using namespace std;

int string_length(const char str[]);
//void to_upper(char str[]);
char* to_upper(char str[]);
char* to_lower(char str[]);


void main()
{
	setlocale(LC_ALL, "rus");
	cout << (int)'a' << endl;
	cout << (int)'A' << endl;

	//char str[] = {'H','e','l','l','o'};//ошибка 
	//char str[] = { 'H','e','l','l','o','\0'};
	//char str[] = "Hello";

	const int SIZE = 256;
	char str[SIZE];
	//cout << "Введите строку:"; cin >> str;//до пробелла 
	SetConsoleCP(1251);
	cout << "Введите строку:"; cin.getline(str, SIZE);
	SetConsoleCP(866);
	cout << str;
	cout << "Размер строки: " << string_length(str) << endl;
	cout << "Вверхний регистр" << to_upper(str) << endl;
	cout << "Нижний регистр" << to_lower(str) << endl;


}

int string_length(const char str[])
{
	int i = 0;
	for (; str[i]; i++)
	return i;
}

char* to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if(str[i]>='a'&&str[i]<='z')str[i] -= 32; //('A' - 'a');//+=(-32)
		if(str[i]>='а'&&str[i]<='я')str[i] -= 32; //('A' - 'a');//+=(-32)
		if (str[i] == 'ё')str[i] -= 16;
	}
	return str;
}

char* to_lower(char str[])
{
	
	for (int i = 0; str[i]; i++)
		str[i] = tolower(str[i]);//принятый символ возвразает в нижнем регистре, если он есть
	return str;
}
