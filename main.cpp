#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int l=0;
	int n;
	int nmr;
	int s=0;
	long p;
	cout<< "ingrese la cantidad de veces a repetir"<<endl;
	cin>> n;
	for(l=0;l<n; l++){
		cout<< "inserte un numero"<<endl;
		cin>>nmr;
		s=s+nmr;
	}
	p=s/n;
	cout<< "el promedio es:"<<endl;
	cout<< p;

	return 0;
}
