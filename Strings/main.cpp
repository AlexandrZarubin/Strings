#include<iostream>
#include<windows.h>
using namespace std;

int string_length(const char* str);
void to_lower(char* str);
void to_upper(char* str);
void shrink(char* str);

//https://snipp.ru/handbk/table-ascii#link-rasshirennye-simvoly-ascii-win-1251-kirillica

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 256;
	//char str = 0;
	
	//cin.getline(str, n);
	//cout << str << endl;
	//cout << string_length(str) << endl;
	////to_lower(str);
	//to_upper(str);
	//cout << str;
	char str[n] = "Хорошо        живет    на   свете      Винни    Пух";
	cout << str<<endl;
	shrink(str);
	cout << str;

	/*for (int i = 0; i < 255; i++)
	{
		str = i;
		cout <<i<< "\t" << str << endl;
	}*/
}

int string_length(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	} 
	return i;
}

void to_lower(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ('a' - 'A');//+=32
		}
		i++;
	}
}

void to_upper(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += ('A' - 'a');//+=(-32)
		}
		i++;
	}
}

void shrink(char* str)
{
	int i = 0,j=0;
	bool flag = false;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str[j++] = str[i];
			flag = false;
		}
		else
		{
			if (!flag)
			{
				str[j++] = ' ';
				flag = true;
			}
		}
		i++;
	}
	
	str[j] = '\0';
	
}
