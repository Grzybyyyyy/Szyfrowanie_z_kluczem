#include <iostream>
#include <string>

using namespace std;

string txt, y;
char x, y2;
int x2, key, opcja;;


void decode()
{
	cout << "> ";
	for (int i = 0; i < txt.length(); i++)
	{
		x = txt.at(i);
		x2 = int(x);
		x2 = x2 - key;
		cout << char(x2);
	}
}

void code()
{
	cout << "> ";
	for (int i = 0; i < txt.length(); i++)
	{
		x = txt.at(i);
		x2 = int(x);
		x2 = x2 + key;
		cout << char(x2);
	}
}

void klucz()
{
	cout << "Klucz (bez spacji): "; cin >> y;
	if (y.length() < 4)
	{
		cout << "Klucz jest za krotki musi miec co najmniej 4 znaki" << endl;
		system("pause");
		exit(0);
	}

	for (int i = 0; i < y.length(); i++)
	{
		y2 = y.at(i);
		key = key + int(y2);
	}
	key = key / 5;
}

int main()
{
	system("title Enigma low budget v1.2");
	system("color a");
	string debug;

	cout << "[1] code" << endl;
	cout << "[2] decode" << endl;
	cout << "> "; cin >> opcja;;
	
	klucz();

	system("cls");
	cout << "klucz: "<< y << " (" << key << ")" << endl;
	cout << "> "; cin >> debug;
	getline(cin, txt);
	txt = debug + txt;
	
	if (opcja == 1)
	{
		code();
	}
	else if (opcja == 2)
	{
		decode();
	}
	else
	{
		cout << "Nie ma takiej opcji w menu :/";
	}

	cout << endl;
	system("pause");
	return 0;
}