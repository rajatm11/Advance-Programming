#include<iostream>                    // COLLATZ CONJENCTURE 
#include<fstream>                     //Encrypter
#include<string>
#include<vector>
# include < stdexcept >
#include<stdlib.h>
#include"Header.h"
using namespace std;
void file() {

}

int  Encrypter::encrypter(string pass) throw (invalid_argument) {
	ofstream S;
	S.open("passwordtest.txt", ios::app);

if(S.is_open()){
	int p = 0;
	for (int i = 0; i < pass.length(); i++) {

		char x = pass.at(i);
		int n = int(x);
		n = p + n;

		int ans = 0;
		while (n != 1) {
			if (n & 1) {
				n = 3 * n + 1;
			}
			else {
				n >>= 1;
			}
			ans++;
		}
		p = ans;
		S << p;
		//cout << p;

	}
	//cout << "\n" << p;
	S << endl;
}

	if (S.fail()) {
		throw invalid_argument("passwordtest.txt is missing");
	}
	S.close();
	return 0;
}