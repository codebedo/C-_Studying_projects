#include <iostream>;

using namespace std;


int main() {
	
	
	
	int a[5], *p, z;
	
	for(int i = 0; i < 5; i++)
		a[i] = i*i;                // poinyrt mrmoty yablosu �iz 
									// s�ral� bir �ekilde a[0] = 0 memort de 1000 mesela 
									//ve a[1} = 1 memoryde 10001 ve a[2] 4 oluyor 10002 oluyor diyelim
		
		
	p = a;
	z= *(p +1) +*(a + 2); // burada p = a ve a 0 oldu�u i�in pointer 0 oluyor , 0+1 , 
						  //  di�eride a n�n pointeri 1000 + 2 den 1002 de mrmou fr 4 t� 1+ 4 ten 5 olur
		
	cout << z;
	
}
