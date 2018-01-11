#include <fstream> //import biblioteki fstream
#include <stdio.h> //import biblioteki stdio.h

using namespace std;

int main ()
{
	fstream uchwyt; //obiekt typu fstream (uchwyt do pliku)
 
    uchwyt.open("in1test.txt"); //otwieramy plik: plik.txt (plik - nazwa pliku, txt - rozszerzenie)
    signed long long linia;
	
	do 
	{
		getlinia(uchwyt, linia);
		cout << linia << endl;
	}
	
	while(linia != "");
	uchwyt.close();
	
	return 0;
	
	//("out1.txt");
}
