#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	int l=0;
	int n;
	int nmr;
	int s=0;
	int p;
	cout<< "ingrese la cantidad de veces a repetir"<<endl;
	cin>> n;
	while(l<n){
		cout<< "inserte un numero"<<endl;
		cin>>nmr;
		s=s+nmr;
		l++;
	}
	p=s/n;
	cout<< "el promedio es:"<<endl;
	cout<< p;
	return 0;
}
