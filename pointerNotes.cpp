#include<iostream>
using namespace std;

int main(){
	int array[] = {1,2,3,4};		// +4lük fark int değeri 4 byte tutulduğundan
									// bir sonraki adrese geçişte 4'lük fark olur.
	cout<< array <<endl;			// Adresin değerini artırmak yerine bir sonraki adrese geçiyoruz.
	// Çıktı : 0x23fe40
	
	cout<<array + 1<<endl;
	// Çıktı: 0x23fe44
	return 0;
}


#include <iostream>
using namespace std;

int main(){
	int array[} = {1,2,3,4};
	
	int *ptr = array;				// Array'in tuttuğu adresi ptr içerisine atamış olduk.
									// Çıktılar yukarıdaki gibi 4'lük farkla olacaktır.
	cout<< ptr <<endl;
	
	cout<< ptr + 1 <<endl;
	
	return 0;
}


#include<iostream>
using namespace std;

int main(){
	int array[] = {1,2,3,4};		// Dizinin 2. elemanın adresini istemek içi -> &
									 
	int *ptr = &array[2];		    
	cout<< ptr <<endl;
	
	return 0;
}


#include<iostream>
using namespace std;

int main(){
	
	string array[] = {"Seda","Rafet","Berkay","Salih"};
	
	string *ptr = array;
	
	cout<< ptr + 1 <<endl;			// Dizideki 2. değerin adresiyle değerin çıktısını almak için;
	cout<< *(ptr+1) <<endl;			// *(pointerDegiskeni) Çıktı: Rafet , olacaktır.
	
	// veya: cout<< ptr[1] << endl;
	
	return 0;
}