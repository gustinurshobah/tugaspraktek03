#include <iostream>
using namespace std;

int main(){
	int x;
	
	cout<<"PROGRAM MENENTUKAN JENIS BILANGAN"<<endl;
	cout<<"+++++++++++++++++++++++++++++++++"<<endl;
	cout<<""<<endl;
	cout<<"Input Bilangan : ";cin>>x;
	cout<<""<<endl;
	
	if (x < 0)
	{
		cout<<"yang anda input adalah bilangan negatif"<<endl;
	}
	
	else if (x>0)
	{
		cout<<"yang anda input adalah bilangan positif"<<endl;
	}
	else
	
		cout<<"yang anda input adalah bilangan nol "<<endl;

	return 0;
}

