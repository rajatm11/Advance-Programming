#include<iostream>
#include<string>                   // its just a dummy function to get the password stored in the string
#include<fstream>
# include < stdexcept >
#include<stdlib.h>
#include"Header.h"
using namespace std;

string temp2() {                      //Exception handling

	string sine;
	ifstream t2;
	t2.open("Tem2.txt");

	if (t2.is_open()) {

		getline(t2, sine);
		//cout << endl <<zine<< endl;

	}
	t2.close();
	ofstream t22;
	t22.open("Tem2.txt", ofstream::out | ofstream::trunc);
	t22.close();
	return sine;


}
