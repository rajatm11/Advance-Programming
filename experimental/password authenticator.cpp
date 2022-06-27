#include<iostream>                // this file will authenticate the password
#include<fstream>
#include<string>

using namespace std;


bool authenticatepassword(string password) {
	bool f = false;
	string aut_password;
	ifstream AU("password.txt");
	//cout << "\n function is here for password authentication";
	if (AU.is_open()) {
		while (!AU.eof()) {
			getline(AU, aut_password);
			//cout <<"\n"<< aut_password;
			if (aut_password.compare(password) == 0) {
				cout << "\nPassword is valid \n SIGN IN Successfull"<<endl;
				f = true;
				break;
			}
			
				
		}
	
		AU.close();
	}
	return f;
}