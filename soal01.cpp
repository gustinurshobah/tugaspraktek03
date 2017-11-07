#include <iostream>
using namespace std;

int main(){
	int x;
	int y;
	int hasil;
	
	cout <<"input nilai x: ";
		cin >> x;
	cout <<"input nilai y: ";
		cin >> y;
		
	hasil=x-y;
	if(hasil<0)
	cout << hasil*-1;
	else
	cout << hasil;
}
