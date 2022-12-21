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
	
	int matriks[row][column];
	for(int i = 0; i < row; i++){
		for(int a = 0; a < column; a++){
			cout<<"Masukan angka ("<<i<<"."<<a<<") : ";
			cin>>matriks[i][a];
		}
	}
	cout<<endl<<"\nSebelum diubah : \n";
	for(int i = 0; i < row; i++){
		for(int a = 0; a < column; a++){
			cout<<matriks[i][a]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl<<"\nSetelah diubah (transpose) : \n";
	int transpose[column][row];
	for(int i = 0; i < column; i++){
		for(int a = 0; a < row; a++){
			transpose[i][a] = matriks[a][i];
		}
	}
	for(int i = 0; i < column; i++){
		for(int a = 0; a < row; a++){
			cout<<transpose[i][a]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}

