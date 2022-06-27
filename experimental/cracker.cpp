#include <iostream>
#include <cstdlib>
#include<string>
#include<fstream>
#include <ctime>
#include <chrono>
//using namespace std::chrono;
using namespace std;

string temp2();

void crack()
{
	long long int attempt=0;
	//clock_t start_t, end_t;
	int p; int strlng; char C; string G;  string line; int counter=0;
		srand(time(0));
		ofstream Temp2("Tem2.txt", ios::app);
		ifstream Colk;
		Colk.open("passwordtest.txt");
		
		int psdlng = 1;

	L:		string F;
		for (int i = 0; i < psdlng; i++) {                //this loop is generating one password of the specified length i.e. psdlng
			int x = (rand() % 26+97);
			char z = int(x);
			F += z;                                                 //USING THIS LOOP IS CARCKED THE FOLLOWING PASSWORDS c,d,v,g,f,e
			                                                              
			//strlng = F.length();
		}
		//cout << endl<<F << endl;
		F;// = "c"; //password
		

		if (Colk.is_open()) {
			int p = 0;
			for (auto i = 0; i < F.length(); i++) {

				char x = F.at(i);
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
				Temp2 << p;
			}
			Temp2 << endl;
			G = temp2();

			//cout << endl << G << endl; //encrypted password 
			/*ofstream ss;
			ss.open("Tem2.txt", ofstream::out | ofstream::trunc);
			ss.close(); */              

			while (!Colk.eof()) {
				attempt++;
				//cout << "\ninside while" << endl;
				getline(Colk, line);
				auto begin = std::chrono::high_resolution_clock::now();  //start_t = clock();
				if (G.compare(line) == 0) {
					auto end = std::chrono::high_resolution_clock::now();
					auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);//end_t = clock();
					cout << "\nPassword Cracked" <<endl<<"The PASSWORD is  "<<F<<endl;
					cout << "\nThe number of attempts : " << attempt << endl;
					//cout << "\nThe time duration  passed : " << (elapsed.count() * 1e-9)<< " ns" << endl << endl;
					 
					Colk.eof();
					break; ////end_t - start_t
				}
			}


		}
		
		if (counter < 1000) { counter++; goto L; }

		
	Colk.close();
	
}