#include<iostream>                           //to  create username and password
#include<fstream>
#include<string>
#include"Header.h"
using namespace std;
string encrypter(string pass);

void CreateUsernamePassword:: createusernamepassword() {
	string C; 
	string username, password;
	ofstream UN("password.txt", ios::app);
	ofstream N("checkusername.txt", ios::app);
	cout << "\nEnter UserName-";
	cin >> username;
    cout << "\nEnter Password-";
	cin >> password;
	C = encrypter(password);
	//cout << "\n output from C is"<<C;
	N << username << endl;
    UN << username <<"     "<<C<< endl;

	N.close();
	
}