#include<iostream>
#include<fstream>
#include<string>
#include"Header.h"
using namespace std;
//int Authentication();
//void createusernamepassword();

int passwordcreater();
int passwordcreater2();
void crack();

int main() {
	CreateUsernamePassword CUP;
	authentication A;
Q:
	//aut_pass AUTP;
	system("CLS");

	int Num;
	ofstream S("passwordtest.txt", ios::app);
	cout << "\n\n1.Create username/password" << endl;
	cout << "2.Check username and password" << endl;
	cout << "3.Generate password strength analysis file" << endl;
	cout << "4.Analys password strength analysis file / Password Crack Status" << endl;
	cin >> Num;



	switch (Num) {



	case (1):

		cout << "\nCreate Username & Password" << endl;
		
		CUP.createusernamepassword();
		cout << "\nAccount Successfully Created" << endl;
		system("PAUSE");
		goto Q;
		break;


	case (2):
		cout << "Check Username and Password" << endl;
		 A.Authentication();
		system("PAUSE");
		goto Q;

		break;



	case (3):
		cout << "3.Generate password strength analysis file" << endl;
		cout << "\n Generating Passwords .......";
		passwordcreater();
		cout << "\n1st set of 10000 Random Passwords have been created and stored in passwordtest.txt       wait a few seconds";
		
		passwordcreater2();
		
		cout<< "\nNow , the 2nd set of 10000 Random Passwords have been created and stored in passwordtest.txt\n";

		
		
		system("PAUSE");
		goto Q;
		break;


	case (4):
		cout << "\nPassword Crack Status" << endl;
		cout << "\n NOW Cracking";
		crack();
		system("PAUSE");
		goto Q;
		break;

	default:
		cout << "Invalid Input" << endl;

	}

	return 0;
}
