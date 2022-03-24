#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a;
	int b;
	int c;
	int e;
	int otro;
	do{
		cout<<"intrese el numero incial ";
		cin>>a;
		cout<<"ingrese hasta donde contar ";
		cin>>b;
		c=a;
		for(int i = a+1; i <= b; i++){
		
			if(i%2==0){
				e=1;
			}
				
			else{
				e=-1;
			}
		    c=c+(i*e);	
		    cout<<e<<" "<<i<<" "<<c<<endl;
		}	
		cout<<"el resultado es: ";
		cout<<c <<endl;
		cout<<"si quiere hacer otro ingrese 1"<<endl;
		cin>>otro;
	}while(otro==1)
	
	;
	return 0;
}
