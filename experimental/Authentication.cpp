#include<iostream>                 
#include<fstream>
#include"Header.h"
using namespace std;
bool authenticateusername(string username);
string encrypter(string pass);
bool authenticatepassword(string password);


int authentication ::Authentication() {
	string username, password;
	string C;
	bool l;
	bool w;
	int v = 0;
	
	ifstream UN("password.txt", ios::app);
	ifstream N("checkusername.txt", ios::app);
	cout << "\nEnter UserName-";
	cin >> username;
P:	cout << "\nEnter Password-";
	cin >> password;
	C = encrypter(password);
	//cout << "\n output from C is"<<C;
	//N << username << endl;
    //UN << username <<"     "<<C<< endl;
	string F = username + "     " + C;
	l= authenticateusername(username);
	if (l == true) {
		w=authenticatepassword(F);
		if (w == false) {
			cout << "\n Pasword is Incorrect";
			while (v < 3) {
				cout << "\n only" <<3-v<<" attempts remaining:";
				v++;
				goto P;
			}
		}
	}
	else
		cout << "invalid username";
	//cout << "\n out put of F\n" << F;
	

	N.close();
	UN.close();
	

	return 0;
}