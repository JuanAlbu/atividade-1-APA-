#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void InsertionSort(int array[], int tamanho) {

	int aux, j;
	for (int i = 1; i < tamanho; i++) {
		aux = array[i];

		for (j=(i-1);(j >= 0)&&(aux < array[j]);j--)
        {
			array[j+1]=array[j];
        }

		array[j+1]=aux;
	}

    for(int x=0; x<=(tamanho-1); x++){
        cout << array[x] << endl;
    }
}

int main() {

	char arquivo[30]; 
	cout << "Digite o nome do arquivo para o teste: " << endl;
	cin >> arquivo;

	int array[100000]; 
	int tamanho = 0; 

	 ifstream myReadFile;
	 myReadFile.open(arquivo);
	 char output[1000];
	 if (myReadFile.is_open()) {
	 while (!myReadFile.eof()) {


	    myReadFile >> output;
	    array[tamanho] = atoi(output);
	   	tamanho++;

	 }
	}
	myReadFile.close();  

	InsertionSort(array, tamanho);
}
