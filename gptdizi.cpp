#include <iostream>

using namespace std;

int main(){
	
	int dizi[5] = {1, 2, 3, 4, 5}; // 5 elemanl� bir dizi tan�mlama ve ba�lang�� de�eri
	int toplam = 0;
	
	
	for(int i = 0; i < 5; i++){
		toplam += dizi[i];
		
	}
	
	cout << "Dizi elemanlarinin toplami: " << toplam << endl ; 
	
	return 0;
}
