#include <iostream>
using namespace std;

int main(){
	int p, s;
	int x, y;
	int L;
	char r;	
	
	cout <<"Pilih Mau Menghitung Luas Apa \n";
	cout <<"p = persegi panjang"<<endl;
	cout <<"s = segitiga"<<endl;
	cout <<"ketikan huruf [p/s]";cin>>r;
	cout << endl;
	
	if (r =='p'||r =='p'){
		cout <<"menghitung Luas Persegi Panjang"<<endl;
		cout <<"input nilai panjang : "; cin >> x;
		cout <<"input nilai lebar : "; cin >> y;
		L=x*y;
		cout <<"Luas Persegi Panjang : " <<L<<"   cm";
	}
		else if(r =='s'||r =='s'){
		cout <<"menghitung Luas Segitiga"<<endl;
		cout <<"input nilai alas : "; cin >> x;
		cout <<"input nilai tinggi : "; cin >> y;
		L=0.5*x*y;
		cout <<"Luas Segitiga: "<<L<<"   cm";
	}
	else{
		cout <<"INPUT TIDAK VALID!";
		
	}
}
