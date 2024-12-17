#include <iostream>
// Bu kodlarda kurucu metot, y�k�c� metot, s�n�f sabiti, metot, pointer, eri�im belirleyici bulunmaktad�r...
using namespace std;

class Kisi {
	private: 
		string adi;
	protected:
		string soyadi;
	public:
		static int nesneSayisi;
		Kisi(string a, string s){
			cout << "Nesne olu�turluyor." <<endl;
			this->adi = a ;
			(*this).soyadi = s;
			Kisi::nesneSayisi++;
			
		}
		string yazdir() {
			return this ->adi + " " + this->soyadi;
			 
		}
		~Kisi() {
			cout << " Nesne siliniyor." <<endl;
		}
};

int Kisi::nesneSayisi = 0;

int main(){
	Kisi *p;
	Kisi k1("Bedirhan", "Aydin");
	Kisi k2("Ejder", "Aydin");
	
	p = &k2;
	
	cout <<k1.yazdir() << endl;
	cout <<p->yazdir() << endl;
	
	cout << "Kopya sayisi : " << Kisi::nesneSayisi << endl;
	
	return 0;
}
