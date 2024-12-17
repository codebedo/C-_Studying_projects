#include <iostream>
#include <vector>

using namespace std;

// ��renci s�n�f� tan�m�
class Ogrenci {
public:
    // Constructor (kurucu)
    Ogrenci(string ad, int numara) : adi(ad), numarasi(numara) {}

    // ��renci bilgilerini ekrana yazd�ran fonksiyon
    void bilgileriYazdir() const { // const eklendi
        cout << "Ad: " << adi << ", Numara: " << numarasi << endl;
    }

private:
    string adi;
    int numarasi;
};

int main() {
    // ��renci nesnelerini saklayacak vekt�r tan�m�
    vector<Ogrenci> ogrenciler;

    // ��renci nesneleri olu�turma ve vekt�re ekleme
    ogrenciler.push_back(Ogrenci("Ali", 101));
    ogrenciler.push_back(Ogrenci("Ay�e", 102));
    ogrenciler.push_back(Ogrenci("Mehmet", 103));

    // Vekt�rdeki t�m ��rencilerin bilgilerini yazd�rma
    cout << "Tum Ogrencilerin Bilgileri:" << endl;
    for (const Ogrenci& ogrenci : ogrenciler) {
        ogrenci.bilgileriYazdir();
    }

    return 0;
}

