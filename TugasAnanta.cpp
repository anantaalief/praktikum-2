#include <iostream>
using namespace std;

int main(){
		int jamKerja;
		int a, b, c, d;
		int jumlah, sisaJam;
		char gol;
		string karyawan;
		
		cout<<"Masukkan nama karyawan = ";
		getline(cin, karyawan);
		cout<<"Masukkan gol (a/b/c/d)= ";
		cin>>gol;
		cout<<"Masukkan jumlah jam kerja (Jam) = ";
		cin>>jamKerja;
		if (jamKerja > 48){
			sisaJam = jamKerja - 48;
			jumlah = sisaJam * 4000;
			}
			else if (jamKerja <= 48){
				jumlah = 0;
				}
	
		cout<<endl;
		
		cout<<"Nama Karyawan = "<<karyawan<<endl;
		cout<<"Anda merupakan golongan = "<<gol<<endl;
		
		if (gol == 'a' ){
			a = 5000 * jamKerja + jumlah;
			cout<<"Gaji anda ="<<a<<endl;
			}
		else if(gol == 'b' ){
			b = 7000 * jamKerja + jumlah;
			cout<<"Gaji anda = "<<b<<endl;
			}
		else if(gol == 'c' ){
			c = 8000 * jamKerja + jumlah;
			cout<<"Gaji anda = "<<c<<endl;
			}
		else if(gol == 'd' ){
			d = 10000 * jamKerja + jumlah;
			cout<<"Gaji anda = "<<d<<endl;
			}
			else {
				cout<<"Tolong masukkan data yang benar";
				}
		cout<<endl;
		
		
		return 0;		
}		
		
		
