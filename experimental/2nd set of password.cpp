#include<iostream>                  
#include<fstream>                            //this file will create 10000 passwords  
#include"Header.h"                           //ASCII values restricted to 10 lowercase

// saved the password in firstset.txt
using namespace std;

//string returnpassword2(int psdlng);
//int encrypter(string pass);



int passwordcreater2() {
	returnpassword2 R;
	Encrypter E;
	int j;
	int r;
	int psdlng = 0;
	string A;


	//ofstream creater("secondset.txt");

	for (j = 0; j < 100; j++) {
		psdlng += 1;

		for (r = 0; r < 100; r++) {
			A = R.returnpassword(psdlng);    //returnpassword function will generate the password of length psdlng 
			//cout << "out of pass gen 2";//cout << endl << A;              //which will be returned and stored in A
			E.encrypter(A);		//creater << endl << A;
			//cout << "\nout of pass ency2";
		}
	}

	return 0;
}


