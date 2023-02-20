#include <iostream>
using namespace std;
int main (){
	float C,R,K,F;
	
	cout<<"Masukan Suhu celcius :";
	cin>>C;
	
	R=C*4/5;
	K=C+273.15;
	F=C*9/5+32;
	
	cout<<"Reamur :"<<R<<endl;
	cout<<"Kelvin : "<<K<<endl;
	cout<<"Fahrenheit :"<<F<<endl;
	
	return 0;
}

