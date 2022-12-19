// no 1. input banyaknya baris dan kolom array dimensi 2. seletah diinput kemudian isi dengan nilai, 
// setelah diisi nilainya, diubah baris menjadi kolom, kolom menjadi baris
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

