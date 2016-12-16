#include <iostream>
#include <conio.h>

using namespace std;

const double ver = 0.1;

/*Zle haslo x3*/
void mayHack(){
	cout << "Closing program...\n";
	getch();
	return;
}

/*Logowanie*/
bool logIn(){
	string password;
	int tr = 0;
	while(tr < 3){
		cout << "password: ";
		cin >> password;
		if(password == "asdf1234"){
			cout << "Logged in!\n";
			return true;
		}
		tr++;
		cout << "Wrong password! Proba: " << tr << "/3\n";		
	}
	return false;
}

/*Commands*/
void openConsoleDialog(){
	string text;
	cout << "Co teraz?\n";
	cin >> text;
	if(text == "bye"){
		cout << "Zegnam.\n";
		return;
	}
	else if(text == "6zer"){
		cout << "Taco wchodzi na serwer!\n";
		cout << "ING LOCAL FILE DOWNALOAD...\n";
		getch();
		cout << "BNP LOCAL FILE DOWANLOAD...\n";
		getch();
		cout << "Na jakie konto przelac 6zer?\n";
		string account_number;
		cin >> account_number;
		cout << "Konto: " << account_number << " doladowano o 1.000.000 PLN.\n";
		getch();
		openConsoleDialog();
	}
	else{
		cout << "Nie rozumiem cie.\n";
		openConsoleDialog();
	}
}

/*Main*/
int main(int argc, char** argv) {
	string code;
	cout << "Purt v." << ver << endl;
	cout << "Loading..." << endl;
	cout << "Stroustrup?" << endl;
	cin >> code;
	if(code == "cpp"){
		if(logIn()){
			openConsoleDialog();
			return 0;
		}else{
			mayHack();
			return 1;
		}
	}else{
		cout << "Tak myslalem..." << endl << "Bye.";
		return 0;
	}
} 
