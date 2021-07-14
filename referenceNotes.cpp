#include <iostream>
using namespace std;

int main(){
	
	int a = 10;
	
	int &ref = a;  // Buradaki & işareti adresini almak için değil değişkenin referans
	ref++;		   // olduğunu belirtmek içindir.
	
	cout<< "a'nın yeni değeri: "<< a <<endl; 
	// Çıktı 11 olacaktır.
	
	return 0;
}

#include <iostream>
using namespace std;

void degerDegistir(int &ref){
	
	ref = 20;
}
int main(){
	int a = 10;
	
	cout<< "a'nın değeri: " << a< <endl;        // Son çıktı 20 olacaktır. Bu fonksiyon ile pointer'ın
	degerDegistir(a);							// yaptığı işlemin benzeri yapılmış olur.
	cout<< "a'nın yeni değeri: "<< a <<endl; 
}

// Pointer ile referans arasındaki en temel fark pointer bir verinin adresini tutarken referans
// verinin değerini alır. Kullanması pointer'a göre daha güvenli, okuması daha kolay kabul edilir.
// Ancak Pointer'ların kullanımı çok daha esnektir.

// Referansların int &ref; şeklinde tanımlanıp sonrasında değer almak gibi bir durumu yoktur.
// Tanımlandığında değer alması gerekir ex: int &ref = a; aksi takdirde hata alınır.
// Pointer'da böyle bir zorunluluk yoktur.