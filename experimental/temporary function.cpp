#include<iostream>
#include<string>                   // its just a dummy function to get the password stored in the string
#include<fstream>
# include < stdexcept >
#include<stdlib.h>
#include"Header.h"
using namespace std;

string dumfun() throw (invalid_argument) {                      //Exception handling

	string zine;
	ifstream dummy;
	dummy.open("temporaryfile.txt");

	if (dummy.is_open()) {

		getline(dummy, zine);
		//cout << endl <<zine<< endl;

	}
	if (dummy.fail()) {
		throw invalid_argument("temporaryfile.txt is missing");
	}
	dummy.close();
	return zine;


}
