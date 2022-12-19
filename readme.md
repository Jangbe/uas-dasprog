# Ujian Akhir Semester 
<br>Mata Kuliah : Dasar Pemrograman
<br>Nama		    : [Devi Mulyana](https://jangbe.github.io)
<br>NIM		      :	1227050035
<br>Jurusan		  : [Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum

## Source Code
### Soal Nomer 1
``` C++
#include <iostream>

using namespace std;

int main(){
	int row, column;
	cout<<"Masukan jumlah baris : ";
	cin>>row;
	cout<<"Masukan jumlah kolom : ";
	cin>>column;
	
	int numbers[row][column];
	for(int i = 0; i < row; i++){
		for(int a = 0; a < column; a++){
			cout<<"Masukan angka ("<<i<<"."<<a<<") : ";
			cin>>numbers[i][a];
		}
	}
	cout<<endl<<"\nSebelum diubah\n";
	// sebelum diubah
	for(int i = 0; i < row; i++){
		for(int a = 0; a < column; a++){
			cout<<numbers[i][a]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl<<"\nSetelah diubah\n";
	// progoress kolom menjadi baris, dan baris menjadi kolom
	int numbers2[column][row];
	for(int i = 0; i < column; i++){
		for(int a = 0; a < row; a++){
			numbers2[i][a] = numbers[a][i];
		}
	}
	for(int i = 0; i < column; i++){
		for(int a = 0; a < row; a++){
			cout<<numbers2[i][a]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
```
<br>

### Soal Nomer 1

``` C++
#include <iostream>

using namespace std;

int main(){
	int row, column;
	cout<<"Masukan jumlah baris : ";
	cin>>row;
	cout<<"Masukan jumlah kolom : ";
	cin>>column;
	
	int numbers[row][column];
	for(int i = 0; i < row; i++){
		for(int a = 0; a < column; a++){
			cout<<"Masukan angka ("<<i<<"."<<a<<") : ";
			cin>>numbers[i][a];
		}
	}
	
	cout<<endl<<"\nInputan Sebelumnya\n";
	// sebelum diubah
	for(int i = 0; i < row; i++){
		for(int a = 0; a < column; a++){
			cout<<numbers[i][a]<<"\t";
		}
		cout<<endl;
	}
	
	int result[row * column];
	int jumlah = 0;
	
	for(int i = 0; i < row; i++){
		for(int a = 0; a < column; a++){
			if(numbers[i][a] % 3 != 0 && numbers[i][a] % 5 != 0 && numbers[i][a] % 7 != 0){
				result[jumlah] = numbers[i][a];
				jumlah++;
			}
		}
	}
	// hasil
	cout<<"\nHasilnya yang tidak bisa dibagi 3, 5, 7 adalah : ";
	for(int i = 0; i < jumlah; i++){
		cout<<result[i];
		if(i < jumlah -1){
			cout<<", ";
		}else{
			cout<<".";
		}
	}
	return 0;
}
```
## Output
