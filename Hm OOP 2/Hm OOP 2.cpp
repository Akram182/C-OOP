#include<iostream>
#include<string>
using namespace std;

void Local() {
	setlocale(LC_ALL, "rus");
}
void task1(string dir, int f) {
	if (dir.empty()) {
		cout << "" << endl;
	}
	else {
		cout << "A)";
		f = dir.rfind("\\");
		for (int i = 0; i < f; i++) {
			cout << dir[i];
		}
		cout << endl;
	}

}
void task2(string dir, int f, int f1,int d) {
	f = dir.rfind("\\");
	f1 = dir.rfind("\\", f - 1);
	cout << "B)";
	for (int i = f1 + 1; i < f; i++) {
		cout << dir[i];
	}
	cout << endl;
	cout << "C)";
	for (int i = f + 1; i < dir.length(); i++) {
		cout << dir[i];
	}
	cout << endl;
	cout << "D)";
	d = dir.rfind('.');
	for (int i = d; i < dir.length();i++) {
		cout << dir[i];
	}
	cout << endl;
	cout << "E)";
	for (int i = f+1; i < d; i++) {
		cout << dir[i];
	}
	cout << endl;
}

int main() {
	Local();
	int f = 0, f1 = 0,d = 0;
	string dir = "C:\\Step\\С++lesson_03\\Docs\\Less03.docx";
	cout << "Путь:" << dir << endl;
	task1(dir, f);
	task2(dir, f, f1,d);


}#include<iostream>
#include<string>
using namespace std;

void Local() {
	setlocale(LC_ALL, "rus");
}
void task1(string dir, int f) {
	if (dir.empty()) {
		cout << "" << endl;
	}
	else {
		cout << "A)";
		f = dir.rfind("\\");
		for (int i = 0; i < f; i++) {
			cout << dir[i];
		}
		cout << endl;
	}

}
void task2(string dir, int f, int f1,int d) {
	f = dir.rfind("\\");
	f1 = dir.rfind("\\", f - 1);
	cout << "B)";
	for (int i = f1 + 1; i < f; i++) {
		cout << dir[i];
	}
	cout << endl;
	cout << "C)";
	for (int i = f + 1; i < dir.length(); i++) {
		cout << dir[i];
	}
	cout << endl;
	cout << "D)";
	d = dir.rfind('.');
	for (int i = d; i < dir.length();i++) {
		cout << dir[i];
	}
	cout << endl;
	cout << "E)";
	for (int i = f+1; i < d; i++) {
		cout << dir[i];
	}
	cout << endl;
}

int main() {
	Local();
	int f = 0, f1 = 0,d = 0;
	string dir = "C:\\Step\\С++lesson_03\\Docs\\Less03.docx";
	cout << "Путь:" << dir << endl;
	task1(dir, f);
	task2(dir, f, f1,d);


}#include<iostream>
#include<string>
using namespace std;

void Local() {
	setlocale(LC_ALL, "rus");
}
void task1(string dir, int f) {
	if (dir.empty()) {
		cout << "" << endl;
	}
	else {
		cout << "A)";
		f = dir.rfind("\\");
		for (int i = 0; i < f; i++) {
			cout << dir[i];
		}
		cout << endl;
	}

}
void task2(string dir, int f, int f1,int d) {
	f = dir.rfind("\\");
	f1 = dir.rfind("\\", f - 1);
	cout << "B)";
	for (int i = f1 + 1; i < f; i++) {
		cout << dir[i];
	}
	cout << endl;
	cout << "C)";
	for (int i = f + 1; i < dir.length(); i++) {
		cout << dir[i];
	}
	cout << endl;
	cout << "D)";
	d = dir.rfind('.');
	for (int i = d; i < dir.length();i++) {
		cout << dir[i];
	}
	cout << endl;
	cout << "E)";
	for (int i = f+1; i < d; i++) {
		cout << dir[i];
	}
	cout << endl;
}

int main() {
	Local();
	int f = 0, f1 = 0,d = 0;
	string dir = "C:\\Step\\С++lesson_03\\Docs\\Less03.docx";
	cout << "Путь:" << dir << endl;
	task1(dir, f);
	task2(dir, f, f1,d);


}
