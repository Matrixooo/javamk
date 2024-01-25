#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
		
	
	int macierz[3][3];
	for(int i =0;i<3;i++){
		for(int j = 0;j<3;j++){
			cout<<"Podaj element a macierzy ["<<i<<"]["<<j<<"]: ";
			cin>>macierz[i][j];
			cout<<endl;
		}
	}
	
	
		for(int i =0;i<1;i++){
		for(int j = 0;j<3;j++){
			cout<<macierz[i][j]<<" ";
	
		}
	}
	for(int i =0;i<1;i++){
		for(int j = 0;j<2;j++){
			cout<<macierz[i][j]<<" ";
			if(j==1){
				cout<<endl;
			}
	
		}
	}
	
	
	for(int i =1;i<2;i++){
		for(int j = 0;j<3;j++){
			cout<<macierz[i][j]<<" ";
	
		}
	}
	for(int i =1;i<2;i++){
		for(int j = 0;j<2;j++){
			cout<<macierz[i][j]<<" ";
				if(j==1){
				cout<<endl;
			}
		}
	}
	
	
	
	
	//petla 3
	for(int i =2;i<3;i++){
		for(int j = 0;j<3;j++){
			cout<<macierz[i][j]<<" ";
		}
	}
	
	for(int i =2;i<3;i++){
		for(int j = 0;j<2;j++){
			cout<<macierz[i][j]<<" ";
				if(j==1){
				cout<<endl;
			}
		}
	}
	int o1 = macierz[0][0] * macierz[1][1] * macierz[2][2];
	int o2 =  macierz[0][1] * macierz[1][2]* macierz[2][0];
	int o3 =  macierz[0][2] * macierz[1][0]* macierz[2][1];
	
	int o4 =  macierz[0][2] * macierz[1][1]* macierz[2][0];
	int o5 =  macierz[0][0] * macierz[1][2]* macierz[2][1];
	int o6 =  macierz[0][1] * macierz[1][0]* macierz[2][2];
	
	int wynik = (o1+o2+o3)-(o4+o5+o6);
	cout<<"Wyznacznik tablicy = ("<<o1<<"+"<<o2<<"+"<<o3<<")-("<<o4<<"+"<<o5<<"+"<<o6<<")="<<wynik;

	
	
	
	return 0;
	
}
