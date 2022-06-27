#include<iostream>                  
#include<fstream>                            //this file will create 10000 passwords  
#include"Header.h"                           //ASCII values restricted to 10 lowercase
# include < stdexcept >
#include<stdlib.h>

using namespace std;
//string returnpassword(int psdlng);
//int encrypter(string pass);



int passwordcreater() {
	Encrypter R;
	Encrypter E;
	int j;
	int r;
	int psdlng = 0;
	string A;
	for (j = 0; j < 100; j++) {
		psdlng += 1;

		for (r = 0; r < 100; r++) {
			A = R.returnpassword(psdlng);    //returnpassword function will generate the password of length psdlng 
			//cout << endl << A;              //which will be returned and stored in A
			E.encrypter(A);		
			//creater << endl << A;

		}
	}
	
	return 0;
}


