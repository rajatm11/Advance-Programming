#include<iostream>
#include<fstream>
#include<string>
#include<ctime>

using namespace std;

class CreateUsernamePassword {
public:
	void createusernamepassword();
};
class authentication : CreateUsernamePassword {
public:
	int Authentication();
};




class Encrypter {
public:
	int  encrypter(string pass);

    string returnpassword(int psdlng) {
		int p; int strlng; char C; string G; string F;
		srand(time(0));
		//F = "";                                           
		for (int i = 0; i < psdlng; i++) {                //this loop is generating one password of the specified length i.e. psdlng
			int x = (rand() % 22 + 97);                  // with the ASCII values btw 97-122 i.e. lowercase aplhabets only
			char z = int(x);
			F += z;			
		}
		//cout << F << endl;
		return F;                                      	
	};
};




class returnpassword2: public Encrypter {
public:
	string returnpassword(int psdlng) 
		{
			int p; int strlng; char C; string G; string F;
			srand(time(0));
			//F = "";
			for (int i = 0; i < psdlng; i++) {                //this loop is generating one password of the specified length i.e. psdlng
			P:	int x = (rand() % 127);                        // and the loop inside it makes sure that no ascii value is repeated
				char z = int(x);
				for (int j = 0; j < F.length(); j++) {
					if (F.at(j) == z) {
						goto P;
					}
				}
				F += z;
				//strlng = F.length();
			}
			//cout << F << endl;

			return F;

		}
	
};