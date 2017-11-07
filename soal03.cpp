#include <iostream>
using namespace std;

int main(){
	float jmkrj, lmbur, gjtot, gjpkk, gjbrsh,uphlmbr, jam, pjk;
	
	cout<<"   PROGRAM GAJI BBERSIH KARYAWAN"<<endl;
	cout<<""<<endl;
	cout<<"Lama Kerja Karyawan    : "; cin>> jmkrj;
	cout<<"Gaji Perjam Karyawan   : "; cin>>gjpkk;
	
	cout<<"   PROGRAM GAJI BBERSIH KARYAWAN"<<endl;
	cout<<""<<endl;
	cout<<"Lama Kerja Karyawan    : "; cin>> jmkrj;
	cout<<"Gaji Perjam Karyawan   : "; cin>>gjpkk;

if (jmkrj>40){
	system("cls");
	cout<<"   PROGRAM GAJI BBERSIH KARYAWAN"<<endl;
	cout<<"     KARYAWAN MENDAPAT LEMBUR"<<endl;
	cout<<""<<endl;
	lmbur=jmkrj-40;
	jam=lmbur*1.5;
	uphlmbr=gjpkk*jam;
	pjk=uphlmbr*0.15;
	gjtot=gjpkk-pjk;
	gjbrsh=gjtot-(jmkrj*40)+((gjpkk-40)*jmkrj*1.5);
	
		cout<<"Lama Kerja Karyawan Dalam Seminggu          : "<<jmkrj<<" Jam"<<endl;
		cout<<"Total Lembur Karyawan                       : "<<lmbur<<" (dalam seminggu)"<<endl;
		cout<<"Gaji Perjam Yang Karyawan Terima            : Rp  "<<gjpkk<<endl;
		cout<<"Upah Lembur Yang Diterima Karyawan          : Rp  "<<uphlmbr<<endl;
		cout<<"Pajak Yang Ditanggung Karyawan              : Rp  "<<pjk<<endl;
		cout<<"Total Gaji Bersih Yang Diterima Karyawan    : Rp  "<<gjbrsh<<endl;

}

	else {
		system,("cls");
		cout<<""<<endl;
		cout<<"   PROGRAM GAJI BBERSIH KARYAWAN"<<endl;
		cout<<"   KARYAWAN TIDAK MENDAPAT LEMBUR"<<endl;
		cout<<""<<endl;
		gjtot=gjpkk*40;
		pjk=gjtot*0.15;
		gjbrsh=gjtot-pjk;
		
		cout<<"Lama Kerja Karyawan Dalam Seminggu          : "<<jmkrj<<" Jam"<<endl;
		cout<<"Total Lembur Karyawan                       : "<<lmbur<<" (dalam seminggu)"<<endl;
		cout<<"Gaji Perjam Yang Karyawan Terima            : Rp  "<<gjpkk<<endl;
		cout<<"Upah Lembur Yang Diterima Karyawan          : Rp  "<<uphlmbr<<endl;
		cout<<"Pajak Yang Ditanggung Karyawan              : Rp  "<<pjk<<endl;
		cout<<"Total Gaji Bersih Yang Diterima Karyawan    : Rp  "<<gjbrsh<<endl;
		
	}
}
