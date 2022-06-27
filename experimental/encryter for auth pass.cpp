#include<iostream>
#include<fstream>                   //this file encrypt the password for authentication
#include<string>
#include<vector>

using namespace std;
string dumfun();
inline void filetrunc() {
	ofstream ofs;
	ofs.open("temporaryfile.txt", ofstream::out | ofstream::trunc);
	ofs.close();
}

string encrypter(string pass){
	int p = 0;
	string x;
	string g;

	ofstream dummy("temporaryfile.txt",ios::app);
	
	for (int i = 0; i < pass.length(); i++)
	{

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

		//cout << p;
		dummy << p;
	};
	
	
	dummy.close();
	g = dumfun();
	//cout <<"\n out fo g is"<< g;
	filetrunc();
	return g;

	
}
