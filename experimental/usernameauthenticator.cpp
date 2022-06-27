#include<iostream>
#include<fstream>
#include<string>

using namespace std;


bool authenticateusername(string username) {
	string aut_username;
	bool b=false;
	//cout << "\n here to authenticate username";
	ifstream YUP("checkusername.txt");
	if(YUP.is_open()){
		while (!YUP.eof()) {
			getline(YUP, aut_username);
			//cout <<"\n"<< aut_username;
			
			if (aut_username.compare(username) == 0) {
				cout << "\nUsername is valid";
				b = true;
				break;
			}
			
			
				
		}
		YUP.close();
	}
	return b;
}