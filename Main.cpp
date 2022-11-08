// шаблон
#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include"windows.h"
using namespace std;

void file_insert(string path, int pos, string str) {

	// shag 1. kopiruem soderzhimoe 
	ifstream in;
	in.open(path);
	string tmp;
	

	if (in.is_open()) {
		char sym;
		while (in.get(sym)) {
			tmp += sym;

		}
	}
	in.close();
	//cout << tmp;
	// shag 2. vstavlyaem soderzhimoe str v stroku tmp
	tmp.insert(pos, str);

	// shag 3. zamenyaem  
	ofstream out(path);
	if (out.is_open())
		out << tmp;
	out.close();
}

const int tick = 100;
int timer = 0;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	string path = "file.txt";

	/*std::fstream file;
	file.open(path, ios::in, ios::app);
	if (file.is_open()) {
		cout << "файл открыт" << '\n';

		// zapis v fail
		file << "Bye world\n";
		cout << "данные записаны\n";
		file.seekg(0, ios::beg); // peremechenie kursora po failu

		// scityvanie iz faila
		cout << "содержание файла\n";
		char sym;
		while (file.get(sym)) {
			cout << sym;
		}

	}
	else
		cout << "ошибка ввода\n";
	file.close();*/


	// zadanie zapis v fail

	/*cout << "vvedite stroku: ";
	string str;
	getline(cin, str);
	cout << "vvedite poziciyu: ";
	cin >> n;
	file_insert(path, n, str);*/

	// zadacha 1 datf iz faila
	/*ifstream in;
	in.open("data.txt");
	if (in.is_open()) {
		int day, month, year;

		string tmp;
		getline(in, tmp);
		day = stoi(tmp);
		cout << "day: " << day << '\n';

		month = stoi(tmp.substr(tmp.find('.') + 1));
		cout << "month: " << month << '\n';

		year = stoi(tmp.substr(tmp.rfind('.') + 1));
		cout << "year: " << year << '\n';

	}
	else
		cout << "oshibka vvoda\n\n";

	in.close();*/

	/*char key;
	key = _getch();
	cout << "vy nazhali na " << key << endl;

	switch (true) {
		if (_kbhit()) {
			key = _getch();
	case 'A':case 'a':
		cout << "LEFT\n";
		break;
	case 'D':case 'd':
		cout << "RHIGHT\n";
		break;
		}

	}
	cout << '.\n';
	Sleep(tick);
	timer += tick;
	if (timer >= 1000) {
		cout << ".\n";
		timer = 0;
	}*/


	/*cout << "vvedite chislo: ";
	cin >> n;
	system("cls");// polnaya ochistka consoli
	cout << "chislo = " << n << endl;
	system("pause");*/// priostanovka prilozheniya
	return 0;
}