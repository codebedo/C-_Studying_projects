#include <iostream>
#include <cmath>

using namespace std;

int main(){
	/*
	int sonuc, x , y;
	// pow �s alma anlam�na gelir
	cout << "Lutfen ussu alinacak sayiyi giriniz... X:";
	cin >> x; 
	cout << "Lutfen ussu giriniz y: " ;
    cin >> y;
	sonuc = pow(x,y);
	cout << "Sonuc: " << sonuc << endl;*/
	
	int sonuc, x;
	cout << "Luntfen ondalikli bir sayi giriniz : ";
	cin >> x ;
	// floor taban ceil tavana yuvarlar ve round en yak�na yuvarlar....
	//sonuc = floor(x);
	//sonuc = ceil(x);
	sonuc = round(x);
	cout << "Sonuc: " << sonuc << endl;
	
	
	return 0;
}
