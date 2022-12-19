// no. 2 deret matematika bilangan yang tidak habis dibagi 3, 5, 7;
// inputnya, baris pertama merupakan banyaknya baris (0 - 20)
// baris kedua merupakan banyaknya kolom
// kemudian outputnya tampilkan bilangan yang tidak habis dibagi 3, 5, 7;
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
